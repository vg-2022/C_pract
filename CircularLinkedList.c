#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the circular linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the end of the circular linked list
void insertEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        newNode->next = *head; // Circular link
        return;
    }
    struct Node* temp = *head;
    while (temp->next != *head) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = *head; // Circular link
}

// Function to delete a node from the circular linked list
void deleteNode(struct Node** head, struct Node* delNode) {
    if (*head == NULL || delNode == NULL) {
        return;
    }
    if (*head == delNode && delNode->next == *head) {
        *head = NULL;
        free(delNode);
        return;
    }
    if (*head == delNode) {
        struct Node* temp = *head;
        while (temp->next != *head) {
            temp = temp->next;
        }
        temp->next = delNode->next;
        *head = delNode->next;
        free(delNode);
        return;
    }
    struct Node* temp = *head;
    while (temp->next != delNode) {
        temp = temp->next;
    }
    temp->next = delNode->next;
    free(delNode);
}

// Function to display the circular linked list
void displayList(struct Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct Node* temp = head;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

// Main function to demonstrate the circular linked list
int main() {
    struct Node* head = NULL;

    // Inserting nodes into the circular linked list
    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);
    insertEnd(&head, 40);

    printf("Circular linked list: ");
    displayList(head);

    // Deleting a node (e.g., the second node)
    if (head != NULL && head->next != head) {
        deleteNode(&head, head->next);
    }

    printf("Circular linked list after deletion: ");
    displayList(head);

    // Freeing the remaining nodes
    while (head != NULL) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
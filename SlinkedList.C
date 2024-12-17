#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
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

// Function to insert a node at the beginning
void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

// Function to insert a node at the end
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to delete a node by value
void deleteNode(struct Node** head, int key) {
    struct Node* temp = *head;
    struct Node* prev = NULL;

    // If the head node itself holds the key
    if (temp != NULL && temp->data == key) {
        *head = temp->next; // Changed head
        free(temp); // Free old head
        return;
    }

    // Search for the key to be deleted
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // If key was not present in linked list
    if (temp == NULL) return;

    // Unlink the node from linked list
    prev->next = temp->next;
    free(temp); // Free memory
}

// Function to search for a node by value
struct Node* searchNode(struct Node* head, int key) {
    struct Node* current = head;
    while (current != NULL) {
        if (current->data == key) {
            return current; // Return the node if found
        }
        current = current->next;
    }
    return NULL; // Return NULL if not found
}

// Function to display the linked list
void displayList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

// Recursive function to delete the entire linked list
void recursiveDelete(struct Node** head) {
    if (*head == NULL) return; // Base case: if the list is empty

    struct Node* temp = *head; // Store the current head
    *head = (*head)->next; // Move head to the next node
    free(temp); // Free the current head
    recursiveDelete(head); // Recursive call
}

// Main function to demonstrate linked list operations
int main() {
    struct Node* head = NULL;

    // Inserting nodes
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtBeginning(&head, 5);
    insertAtEnd(&head, 30);
    
    printf("Linked List: ");
    displayList(head);

    // Searching for a node
    int key = 20;
    struct Node* foundNode = searchNode(head, key);
    if (foundNode) {
        printf("Node with value %d found.\n", foundNode->data);
    } else {
        printf("Node with value %d not found.\n", key);
    }

    // Deleting a node
    deleteNode(&head, 20);
    printf("Linked List after deleting 20: ");
    displayList(head);

    // Recursively deleting the entire linked list
    recursiveDelete(&head);
    printf("Linked List after recursive deletion: ");
    displayList(head); // Should print NULL

    return 0;
}
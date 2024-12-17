#include <stdio.h>
#include <stdlib.h>

// Node structure for linked list
struct Node {
    int data;
    struct Node* next;
};

// Stack structure using linked list
struct StackLinkedList {
    struct Node* top;
};

// Function to create a stack
struct StackLinkedList* createStack() {
    struct StackLinkedList* stack = (struct StackLinkedList*)malloc(sizeof(struct StackLinkedList));
    stack->top = NULL; // Initialize top to NULL (empty stack)
    return stack;
}

// Function to check if the stack is empty
int isEmpty(struct StackLinkedList* stack) {
    return stack->top == NULL;
}

// Function to push an element onto the stack
void push(struct StackLinkedList* stack, int item) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = item;
    newNode->next = stack->top; // Link new node to the previous top
    stack->top = newNode; // Update top to new node
    printf("%d pushed onto stack\n", item);
}

// Function to pop an element from the stack
int pop(struct StackLinkedList* stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow! Cannot pop\n");
        return INT_MIN; // Return a sentinel value
    }
    struct Node* temp = stack->top; // Store the current top
    int poppedValue = temp->data; // Get the data to return
    stack->top = stack->top->next; // Update top to the next node
    free(temp); // Free the old top node
    return poppedValue; // Return the popped value
}

// Function to peek at the top element of the stack
int peek(struct StackLinkedList* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty! Cannot peek\n");
        return INT_MIN; // Return a sentinel value
    }
    return stack->top->data; // Return the data of the top node
}

// Function to display the stack
void displayStack(struct StackLinkedList* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return;
    }
    struct Node* current = stack->top;
    printf("Stack elements: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Main function to demonstrate stack operations using linked list
int main() {
    struct StackLinkedList* stack = createStack();

    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    displayStack(stack);

    printf("Top element is %d\n", peek(stack));
    printf("%d popped from stack\n", pop(stack));
    displayStack(stack);

    return 0;
}
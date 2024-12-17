#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX 100 // Maximum size of the stack

// Stack structure using array
struct StackArray {
    int top;
    int items[MAX];
};

// Function to create a stack
struct StackArray* createStack() {
    struct StackArray* stack = (struct StackArray*)malloc(sizeof(struct StackArray));
    stack->top = -1; // Initialize top to -1 (empty stack)
    return stack;
}

// Function to check if the stack is full
int isFull(struct StackArray* stack) {
    return stack->top == MAX - 1;
}

// Function to check if the stack is empty
int isEmpty(struct StackArray* stack) {
    return stack->top == -1;
}

// Function to push an element onto the stack
void push(struct StackArray* stack, int item) {
    if (isFull(stack)) {
        printf("Stack overflow! Cannot push %d\n", item);
        return;
    }
    stack->items[++stack->top] = item; // Increment top and add item
    printf("%d pushed onto stack\n", item);
}

// Function to pop an element from the stack
int pop(struct StackArray* stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow! Cannot pop\n");
        return INT_MIN; // Return a sentinel value
    }
    return stack->items[stack->top--]; // Return top item and decrement top
}

// Function to peek at the top element of the stack
int peek(struct StackArray* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty! Cannot peek\n");
        return INT_MIN; // Return a sentinel value
    }
    return stack->items[stack->top]; // Return top item
}

// Function to display the stack
void displayStack(struct StackArray* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = stack->top; i >= 0; i--) {
        printf("%d ", stack->items[i]);
    }
    printf("\n");
}

// Main function to demonstrate stack operations using array
int main() {
    struct StackArray* stack = createStack();

    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    displayStack(stack);

    printf("Top element is %d\n", peek(stack));
    printf("%d popped from stack\n", pop(stack));
    displayStack(stack);

    return 0;
}
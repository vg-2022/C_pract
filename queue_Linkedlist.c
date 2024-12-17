#include <stdio.h>
#include <stdlib.h>

// Node structure for linked list
struct Node {
    int data;
    struct Node* next;
};

// Queue structure using linked list
struct QueueLinkedList {
    struct Node* front;
    struct Node* rear;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to create a queue
struct QueueLinkedList* createQueue() {
    struct QueueLinkedList* queue = (struct QueueLinkedList*)malloc(sizeof(struct QueueLinkedList));
    queue->front = NULL; // Initialize front to NULL (empty queue)
    queue->rear = NULL;  // Initialize rear to NULL (empty queue)
    return queue;
}

// Function to check if the queue is empty
int isEmpty(struct QueueLinkedList* queue) {
    return queue->front == NULL;
}

// Function to enqueue an element into the queue
void enqueue(struct QueueLinkedList* queue ```c
, int item) {
    struct Node* newNode = createNode(item);
    if (queue->rear == NULL) {
        // If the queue is empty, both front and rear point to the new node
        queue->front = queue->rear = newNode;
    } else {
        // Add the new node at the end of the queue and update rear
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
    printf("%d enqueued to queue\n", item);
}

// Function to dequeue an element from the queue
int dequeue(struct QueueLinkedList* queue) {
    if (isEmpty(queue)) {
        printf("Queue underflow! Cannot dequeue\n");
        return INT_MIN; // Return a sentinel value
    }
    struct Node* temp = queue->front; // Store the front node
    int dequeuedValue = temp->data; // Get the data to return
    queue->front = queue->front->next; // Move front to the next node
    if (queue->front == NULL) {
        // If the queue is now empty, update rear to NULL
        queue->rear = NULL;
    }
    free(temp); // Free the old front node
    return dequeuedValue; // Return the dequeued value
}

// Function to peek at the front element of the queue
int peek(struct QueueLinkedList* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty! Cannot peek\n");
        return INT_MIN; // Return a sentinel value
    }
    return queue->front->data; // Return the data of the front node
}

// Function to display the queue
void displayQueue(struct QueueLinkedList* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        return;
    }
    struct Node* current = queue->front;
    printf("Queue elements: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Main function to demonstrate queue operations using linked list
int main() {
    struct QueueLinkedList* queue = createQueue();

    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    displayQueue(queue);

    printf("Front element is %d\n", peek(queue));
    printf("%d dequeued from queue\n", dequeue(queue));
    displayQueue(queue);

    return 0;
}
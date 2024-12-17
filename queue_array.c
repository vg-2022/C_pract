#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX 100 // Maximum size of the queue

// Queue structure using array
struct QueueArray {
    int items[MAX];
    int front;
    int rear;
};

// Function to create a queue
struct QueueArray* createQueue() {
    struct QueueArray* queue = (struct QueueArray*)malloc(sizeof(struct QueueArray));
    queue->front = -1; // Initialize front to -1 (empty queue)
    queue->rear = -1;  // Initialize rear to -1 (empty queue)
    return queue;
}

// Function to check if the queue is full
int isFull(struct QueueArray* queue) {
    return (queue->rear + 1) % MAX == queue->front;
}

// Function to check if the queue is empty
int isEmpty(struct QueueArray* queue) {
    return queue->front == -1;
}

// Function to enqueue an element into the queue
void enqueue(struct QueueArray* queue, int item) {
    if (isFull(queue)) {
        printf("Queue overflow! Cannot enqueue %d\n", item);
        return;
    }
    if (isEmpty(queue)) {
        queue->front = 0; // Set front to 0 if queue was empty
    }
    queue->rear = (queue->rear + 1) % MAX; // Circular increment
    queue->items[queue->rear] = item; // Add item
    printf("%d enqueued to queue\n", item);
}

// Function to dequeue an element from the queue
int dequeue(struct QueueArray* queue) {
    if (isEmpty(queue)) {
        printf("Queue underflow! Cannot dequeue\n");
        return INT_MIN; // Return a sentinel value
    }
    int item = queue->items[queue->front]; // Get the front item
    if (queue->front == queue->rear) {
        // Queue has only one element
        queue->front = -1; // Reset queue to empty
        queue->rear = -1;
    } else {
        queue->front = (queue->front + 1) % MAX; // Circular increment
    }
    return item; // Return the dequeued item
}

// Function to peek at the front element of the queue
int peek(struct QueueArray* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty! Cannot peek\n");
        return INT_MIN; // Return a sentinel value
    }
    return queue->items[queue->front]; // Return the front item
}

// Function to display the queue
void displayQueue(struct QueueArray* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    int i = queue->front;
    while (1) {
        printf("%d ", queue->items[i]);
        if (i == queue->rear) break; // Stop when we reach the rear
        i = (i + 1) % MAX; // Circular increment
    }
    printf("\n");
}

// Main function to demonstrate queue operations using array
int main() {
    struct QueueArray* queue = createQueue();

    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    displayQueue(queue);

    printf("Front element is %d\n", peek(queue));
    printf("%d dequeued from queue\n", dequeue(queue));
    displayQueue(queue);

    return 0;
}
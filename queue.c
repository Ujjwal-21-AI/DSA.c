#include <stdio.h>
#include <stdlib.h>

#define SIZE 5  // Maximum size of queue

int queue[SIZE];
int front = -1, rear = -1;

// Function to insert element
void insert() {
    int value;
    if (rear == SIZE - 1) {
        printf("Queue is full! Cannot insert.\n");
    } else {
        printf("Enter value to insert: ");
        scanf("%d", &value);
        if (front == -1) {
            front = 0;  // First element inserted
        }
        rear++;
        queue[rear] = value;
        printf("%d inserted into queue.\n", value);
    }
}

// Function to delete element
void delete() {
    if (front == -1 || front > rear) {
        printf("Queue is empty! Cannot delete.\n");
    } else {
        printf("%d deleted from queue.\n", queue[front]);
        front++;
        if (front > rear) { // Reset queue when empty
            front = rear = -1;
        }
    }
}

// Function to display queue
void display() {
    if (front == -1) {
        printf("Queue is empty!\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice;
    while (1) {
        printf("\n--- Queue Menu ---\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

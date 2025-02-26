#include <stdio.h>
#include <stdlib.h>

#define MAX 100  // Maximum stack size

// Stack structure
struct Stack {
    int top;
    int arr[MAX];
};

// Initialize stack
void initialize(struct Stack *s) {
    s->top = -1;
}

// Check if stack is full
int isFull(struct Stack *s) {
    return s->top == MAX - 1;
}

// Check if stack is empty
int isEmpty(struct Stack *s) {
    return s->top == -1;
}

// Push operation
void push(struct Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack Overflow! Cannot push %d\n", value);
        return;
    }
    s->arr[++(s->top)] = value;
    printf("%d pushed into stack.\n", value);
}

// Pop operation
int pop(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack Underflow! No elements to pop.\n");
        return -1;
    }
    printf("%d popped from stack.\n", s->arr[s->top]);
    return s->arr[(s->top)--];
}

// Peek operation (View top element)
int peek(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty!\n");
        return -1;
    }
    return s->arr[s->top];
}

// Display stack elements
void display(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty!\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = s->top; i >= 0; i--)
        printf("%d ", s->arr[i]);
    printf("\n");
}

int main() {
    struct Stack s;
    initialize(&s);
    int choice, value;
    printf("Name: Shubham Maurya.\n");
    printf("Roll No: 49\n");
    printf("Batch: CE 1 - Batch C\n");
    printf("PRN: 2414110245\n");

    while (1) {
        printf("\nStack Operations:\n");
        printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter value to push: ");
            scanf("%d", &value);
            push(&s, value);
            break;
        case 2:
            pop(&s);
            break;
        case 3:
            printf("Top element: %d\n", peek(&s));
            break;
        case 4:
            display(&s);
            break;
        case 5:
            printf("Exiting program...\n");
            exit(0);
        default:
            printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}

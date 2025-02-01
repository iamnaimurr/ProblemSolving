#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void initialize() {
    top = -1;
}

int isFull() {
    return top == MAX - 1;
}

int isEmpty() {
    return top == -1;
}

void push(int value) {
    if (isFull()) {
        printf("Stack is full! Cannot push %d.\n", value);
    } else {
        top++;
        stack[top] = value;
        printf("%d has been pushed onto the stack.\n", value);
    }
}

void pop() {
    if (isEmpty()) {
        printf("Stack is empty! Nothing to pop.\n");
    } else {
        int value = stack[top];
        top--;
        printf("Popped %d from the stack.\n", value);
    }
}

void show() {
    if (isEmpty()) {
        printf("The stack is empty.\n");
    } else {
        printf("Stack elements (top to bottom):\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    initialize();

    while (1) {
        printf("\nChoose an operation:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Show\n");
        printf("4. Exit\n");
        printf("Your choice: ");

        int choice, value;
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter a value to push: ");
            scanf("%d", &value);
            push(value);
        } else if (choice == 2) {
            pop();
        } else if (choice == 3) {
            show();
        } else if (choice == 4) {
            printf("Exiting. Goodbye!\n");
            break;
        } else {
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}

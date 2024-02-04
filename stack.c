// JAI SHRI RAM
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int n;

// Function to push an element onto the stack
void push(int s[], int *top) {
    if (*top == n - 1) {
        printf("\n Stack is full\n");
        return;
    }
    int elem;
    printf("Enter the element to be added: ");
    scanf("%d", &elem);
    s[++(*top)] = elem;
}

// Function to pop an element from the stack
void pop(int s[], int *top) {
    if (*top == -1) {
        printf("\n Stack is empty\n");
        return;
    }
    printf("\nThe deleted element is: %d\n", s[(*top)--]);
}

// Function to display elements in the stack
void display(int s[], int *top) {
    if (*top == -1) {
        printf("\n Stack is empty\n");
        return;
    }
    printf("\n Stack elements:\n");
    for (int i = 0; i <= *top; i++)
        printf("%d\n", s[i]);
}

// Function to check if the stack is full
bool isFull(int *top) {
    return (*top == n - 1);
}

// Function to check if the stack is empty
bool isEmpty(int *top) {
    return (*top == -1);
}

// Function to peek at all elements in the stack
void peek(int s[], int *top) {
    if (*top == -1) {
        printf("\n Stack is empty\n");
        return;
    }
    printf("\n Stack elements:\n");
    for (int i = *top; i >= 0; i--)
        printf("%d\n", s[i]);
}

int main() {
    printf("Enter the length of stack: ");
    scanf("%d", &n);
    int stack[n], ch;
    int top = -1;

    // Menu-driven loop for stack operations
    while (1) {
        printf("\n The choices are :\n 1. Push\n 2. Pop\n 3. Display \n 4. Is Full\n 5. Is Empty \n 6. Peek \n 7. Exit");
        printf("\nEnter your choice :");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                push(stack, &top);
                break;
            case 2:
                pop(stack, &top);
                break;
            case 3:
                display(stack, &top);
                break;
            case 4:
                printf("\n Is Full: %s\n", isFull(&top) ? "true" : "false");
                break;
            case 5:
                printf("\n Is Empty: %s\n", isEmpty(&top) ? "true" : "false");
                break;
            case 6:
                peek(stack, &top);
                break;
            case 7:
                exit(0);
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    }
    return 0;
}

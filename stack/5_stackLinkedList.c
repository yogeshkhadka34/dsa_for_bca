#include <stdio.h>
#define MAX_SIZE 100

// Define a structure for stack
typedef struct {
    int array[MAX_SIZE];
    int top;
}Stack;

// Function to initialize the stack
void initializeStack(Stack *stack) {
    (*stack).top = -1;
}

// Function to check if the stack is empty
int isEmpty(Stack *stack) {
    return (stack->top == -1);
}

// Function to check if the stack is full
int isFull(Stack *stack) {
    return (stack->top == MAX_SIZE - 1);
}

// Function to push an element onto the stack
void push(Stack *stack, int element) {
    if (isFull(stack)) {
        printf("Stack Overflow\n");
        return;
    }
    stack->top++;
    stack->array[stack->top] = element;
}

// Function to pop an element from the stack
int pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow\n");
        return -1; // return -1 indicating failure
    }
    int element = stack->array[stack->top];
    stack->top--;
    return element;
}

int main() {
    Stack stack;
    initializeStack(&stack);

    // Pushing elements onto the stack
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    // Popping elements from the stack
    printf("Popped element: %d\n", pop(&stack));
    printf("Popped element: %d\n", pop(&stack));
    printf("Popped element: %d\n", pop(&stack));

    // Trying to pop from an empty stack
    printf("Popped element: %d\n", pop(&stack)); // This should result in stack underflow

    return 0;
}


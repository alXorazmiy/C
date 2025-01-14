#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *array;
    int top;
    int size;
}Stack;


Stack *create(int size) {
    Stack *stack = malloc(sizeof(Stack));
    stack->size = size;
    stack->array = malloc(stack->size * sizeof(int));
    stack->top = -1;
    return stack;
}

void output(Stack *stack) {
    while(stack->top != -1) {
        printf("stack[ %d ] = %d\n", stack->top, stack->array[stack->top]);
        stack->top--;
    }
}


void push(Stack *stack, int value) {
    if (stack->top < stack->size - 1) {
        stack->top++;
        stack->array[stack->top] = value;
    } else {
        printf("Stack to'lgan\n");
    }
}


void pop(Stack *stack) {
    if (stack->top > -1) {
        stack->top--;
    }
}

int main() {
    Stack *stack = create(10);
    push(stack, 1);
    push(stack, 5);
    push(stack, 2);
    pop(stack);
    push(stack, 7);
    output(stack);
    free(stack->array);
    return 0;
}
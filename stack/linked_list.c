#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    int data;     
    struct Node* next; 
} Node;

typedef struct Stack {
    Node* top;  
} Stack;


Stack* createStack() {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->top = NULL;  
    return stack;
}


void push(Stack* stack, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = stack->top; 
    stack->top = newNode;        
}

int pop(Stack* stack) {
    if (stack->top == NULL) {
        printf("Stack to'lgan\n");
        return -1;
    }
    Node* temp = stack->top;
    int poppedValue = temp->data;
    stack->top = stack->top->next; 
    free(temp);  
    return poppedValue;
}


void output(Stack* stack) {
    if (stack->top == NULL) {
        printf("Stack bo'sh\n");
        return;
    }
    
    Node* current = stack->top;  
    while (current != NULL) {
        printf("stack[%d] = %d\n", current->data, current->data);  
        current = current->next; 
    }
}


int main() {
    Stack* stack = createStack();
    
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    
    output(stack);  

    pop(stack); 
    pop(stack);  

    output(stack); 
    
    return 0;
}
#include <stdio.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int item) {
    if (top == MAX_SIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = item;
}

int pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

int peek() {
    if (top == -1) {
        printf("Stack is Empty\n");
        return -1;
    }
    return stack[top];
}

int isEmpty() {
    return top == -1;
}

int isFull() {
    return top == MAX_SIZE - 1;
}

int main() {
       push(10);
       push(20);
       push(30);
       push(40);
    
    printf("\nTop element: %d\n", peek());
    
    printf("Elements: ");
   for(int i =top;i>=0;i--){
   	printf("%d\t",stack[i]);
   }
    
    return 0;
}


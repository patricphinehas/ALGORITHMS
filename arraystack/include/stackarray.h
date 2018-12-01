#include<stdio.h>
#include<conio.h>
#define max 5

int top = -1, stack[max];

void push() {
    int x;
    if (top == max - 1) {
        printf("\n Stack is overflown \n");
        return;
    } else {
        printf("\n Enter the element: ");
        scanf("%d", & x);
        top = top + 1;
        stack[top] = x;
    }
}
void pop() {
    int x;
    if (top == -1) {
        printf("\n The stack is underflown \n");
    } else {
        x = stack[top];
        top = top - 1;
        printf("\n %d is popped from the stack\n", x);
    }
}
void display() {
    int i;
    if (top == -1) {
        printf("\n Stack is empty \n");
        return;
    } else {
        printf("\n The elements in the stack are: ");
        for (i = 0; i <= top; i++) {
            printf("%d\t", stack[i]);
        }
    }
}
void topofthestack() {
    if (top == -1) {
        printf("\n The stack is empty \n");
    } else {
        printf("\n The top of the stack is %d", stack[top]);
    }
}
void sorting() {
    int i, temp = 0, j;
    if (top == -1) {
        printf("\n The stack is empty \n");
        return;
    } else {
        for (i = 0; i < top; i++) {
            for (j = i + 1; j <= top; j++) {
                if (stack[i] > stack[j]) {
                    temp = stack[i];
                    stack[i] = stack[j];
                    stack[j] = temp;
                }
            }
        }

        printf("\n After sorting the elements in the stack are: ");
        for (i = 0; i <= top; i++) {
            printf("%d\t", stack[i]);
        }
        printf("\n The maximum element in the stack are: %d", stack[top]);
        printf("\n The minimum element in the stack are: %d", stack[0]);
    }
}
void traverse() {
    int i;
    if (top == -1) {
        printf("\n The stack is empty\n");
        return;
    } else {
        for (i = top; i >= 0; i--) {
            printf("\n The traversed elemnt is:%d", stack[i]);
        }
    }
}
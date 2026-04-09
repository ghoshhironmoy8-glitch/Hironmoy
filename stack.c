#include <stdio.h>

int a[10];
int top = -1;


void push(int value) {
    if (top == 9) {
        printf("Stack Overflow\n");
    } else {
        top++;
        a[top] = value;
    }
}


void pop() {
    if (top >= 0) {
        printf("Popped: %d\n", a[top]);
        top--;
    } else {
        printf("Stack is empty\n");
    }
}


int main() {
    push(10);
    push(2);
    pop();
    pop();
    pop();

    return 0;
}

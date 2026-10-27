#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

void push(int val) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = val;
}

int pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

int peep(int n) {
    if (top - n + 1 < 0) {
        printf("Invalid position\n");
        return -1;
    }
    return stack[top - n + 1];
}

void update(int n, int val) {
    if (top - n + 1 < 0) {
        printf("Invalid position\n");
        return;
    }
    stack[top - n + 1] = val;
}

int main() {
    push(10);
    push(20);
    push(30);
    push(40);

    printf("Peep 2nd from top: %d\n", peep(2));

    update(2, 99);
    printf("Peep 2nd from top after update: %d\n", peep(2));

    printf("Popped: %d\n", pop());
    printf("Popped: %d\n", pop());
    printf("Popped: %d\n", pop());
    printf("Popped: %d\n", pop());
    printf("Popped: %d\n", pop());

    return 0;
}

#include <stdio.h>
#define MAX 20

int stack[MAX];
int top = -1;

void push(int val) {
    stack[++top] = val;
}

int pop() {
    return stack[top--];
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        push(i);
    }

    int fact = 1;
    while (top != -1) {
        fact = fact * pop();
    }

    printf("Factorial: %d\n", fact);

    return 0;
}

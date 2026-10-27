#include <stdio.h>
#include <string.h>
#define MAX 100

char stack[MAX];
int top = -1;

void push(char ch) {
    stack[++top] = ch;
}

char pop() {
    return stack[top--];
}

int main() {
    char str[MAX];
    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++) {
        push(str[i]);
    }

    printf("Reversed: ");
    while (top != -1) {
        printf("%c", pop());
    }
    printf("\n");

    return 0;
}

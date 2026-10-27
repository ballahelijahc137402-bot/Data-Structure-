#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void create(int n)
{
    struct Node *temp, *last;
    int value, i;

    for (i = 0; i < n; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter element %d: ", i + 1);
        scanf("%d", &value);
        temp->data = value;
        temp->next = NULL;

        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            last->next = temp;
        }
        last = temp;
    }
}

void display()
{
    struct Node *p = head;
    if (p == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    printf("Linked List: ");
    while (p != NULL)
    {
        printf("%d -> ", p->data);
        p = p->next;
    }
    printf("NULL\n");
}

int main()
{
    int n;
    printf("Enter number of nodes: ");
    scanf("%d", &n);

    create(n);
    display();

    return 0;
}

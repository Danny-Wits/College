#include <stdio.h>
#include <stdlib.h>
// definition
struct node
{
    int value;
    struct node *next;
};
void traverse(struct node *);
int main()
{ // creation
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *ptr2 = (struct node *)malloc(sizeof(struct node));
    struct node *ptr3 = (struct node *)malloc(sizeof(struct node));
    struct node *last = (struct node *)malloc(sizeof(struct node));
    // 1st node
    head->value = 10;
    head->next = ptr2;
    // 2nd node
    ptr2->value = 20;
    ptr2->next = ptr3;
    // 3nd node
    ptr3->value = 30;
    ptr3->next = last;
    // last node
    last->value = 40;
    last->next = NULL;
    // Traversing
    traverse(head);
    return 0;
}
void traverse(struct node *ptr)
{
    printf("The elements of the linked list are:-\n");
    while (ptr != NULL)
    {
        printf("%d,", ptr->value);
        ptr = ptr->next;
    }
    printf("\b.\n");
}
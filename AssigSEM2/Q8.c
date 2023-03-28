#include <stdio.h>
#include <stdlib.h>
// Two pointers required
struct node
{
    struct node *prew;
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
    head->prew = NULL;
    head->value = 10;
    head->next = ptr2;
    // 2nd node
    ptr2->prew = head;
    ptr2->value = 20;
    ptr2->next = ptr3;
    // 3nd node
    ptr3->prew = ptr2;
    ptr3->value = 30;
    ptr3->next = last;
    // last node
    last->prew = ptr3;
    last->value = 40;
    last->next = NULL;
    // Traversing
    traverse(head);
    return 0;
}
void traverse(struct node *ptr)
{
    printf("The doubly linked list is:-\n");
    while (ptr != NULL)
    {
        printf("%p[(%p)-%d-(%p)]-->  ", ptr, ptr->prew, ptr->value, ptr->next);
        ptr = ptr->next;
    }
    printf("\b.\n");
}
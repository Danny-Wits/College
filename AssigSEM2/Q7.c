#include <stdio.h>
#include <stdlib.h>
// definition
struct node
{
    int value;
    struct node *next;
};

void traverse(struct node *);
struct node *deletion(struct node *, int);
int main()
{ // Creation
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
    // Traversing before deletion
    traverse(head);
    // Input
    int index;
    printf("Please enter the location of element you want to delete:-");
    scanf("%d", &index);
    // index fixing
    index--;
    // deletion
    // Traversing after deletion
    traverse(deletion(head, index));
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
struct node *deletion(struct node *ptr, int index)
{
    struct node *head = ptr;
    printf("\n[Deletion Complete]\n");
    if (index <= 0)
    {
        struct node *ptr2 = ptr->next;
        free(head);
        return ptr2;
    }
    else if (index >= 3)
    {
        struct node *del = ptr->next;
        while (del->next != NULL)
        {
            ptr = ptr->next;
            del = del->next;
        }
        ptr->next = NULL;
        free(del);
        return head;
    }
    else
    {
        int i = 0;
        while (index - 1 != i)
        {
            i++;
            ptr = ptr->next;
        }
        struct node *del = ptr->next;
        ptr->next = del->next;
        free(del);
        return head;
    }
}
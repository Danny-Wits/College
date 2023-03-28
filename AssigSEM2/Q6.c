#include <stdio.h>
#include <stdlib.h>
// definition
struct node
{
    int value;
    struct node *next;
};

void traverse(struct node *);
struct node *insertion(struct node *, int, int);
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
    // Traversing before insetion
    traverse(head);
    // Input
    int item, index;
    printf("Please enter the value you want to insert:-");
    scanf("%d", &item);
    printf("Please enter the location at which you want to insert:-");
    scanf("%d", &index);
    index--;
    // insertion
    // Traversing after insetion
    traverse(insertion(head, item, index));
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
struct node *insertion(struct node *ptr, int item, int index)
{
    struct node *head = ptr;
    // creating the node to store the value
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->value = item;
    printf("\n[Insetion Complete]\n");
    // linking
    if (index <= 0)
    {
        new->next = ptr;
        return new;
    }
    else if (index >= 4)
    {
        new->next = NULL;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = new;

        return head;
    }
    else
    {
        int i = 1;
        while (index != i)
        {
            i++;
            ptr = ptr->next;
        }
        struct node *temp = ptr->next;
        ptr->next = new;
        new->next = temp;
        return head;
    }
}
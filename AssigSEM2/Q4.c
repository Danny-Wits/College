#include <stdio.h>
int size;
void traverse(int *);
void search(int *, int);
int main()
{
    // declaration
    int ar[] = {1, 2, 3, 5, 6, 7, 8, 9, 10}, item;
    size = sizeof(ar) / sizeof(ar[0]);
    // Displaying the array
    traverse(ar);
    // Input
    printf("Please enter number you want to search here:- ");
    scanf("%d", &item);
    // Search
    search(ar, item);

    return 0;
}
void traverse(int ar[])
{
    printf("The arrary is ");
    for (int i = 0; i < size; i++)
    {
        printf("%d,", ar[i]);
    }
    printf("\b.\n");
}
// A  linear search function

void search(int ar[], int item)
{
    short flag = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (ar[i] == item)
        {
            flag = i;
            break;
        }
    }
    printf("[Search completed]\n");
    if (flag != 0)
    {
        printf("The element was found at an index of %d\n", flag);
    }
    else
    {
        printf("The item was not found\n");
    }
}
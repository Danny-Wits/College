#include <stdio.h>
int size;
void traverse(int *);
void insertion(int *, int, int);
int main()
{
    // declaration
    int ar[] = {1, 2, 3, 5, 6, 7}, item, index;
    size = sizeof(ar) / sizeof(ar[0]);
    // before insertion
    traverse(ar);
    // Input
    printf("Please enter the value you want to insert:-");
    scanf("%d", &item);
    printf("Please enter the index at which you want to insert:-");
    scanf("%d", &index);
    // insertion
    insertion(ar, item, index);
    // after insertion
    traverse(ar);
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
void insertion(int ar[], int item, int index)
{
    for (int i = size; i >= index; i--)
    {
        ar[i + 1] = ar[i];
    }
    size++;
    ar[index] = item;

    printf("\n[Insertion completed]\n");
}
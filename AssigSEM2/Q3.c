#include <stdio.h>
int size;
void traverse(int *);
void deletion(int *, int);
int main()
{
    // declaration
    int ar[] = {1, 2, 3, 5, 5, 6, 7}, index;
    size = sizeof(ar) / sizeof(ar[0]);
    // before deletion
    traverse(ar);
    // Input
    printf("Please enter the location of element you want to delete:-");
    scanf("%d", &index);
    // index fixing
    index--;
    // deletion
    deletion(ar, index);
    // after deletion
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
void deletion(int ar[], int index)
{
    for (int i = index; i < size; i++)
    {

        ar[i] = ar[i + 1];
    }
    size--;

    printf("[Deletion completed]\n");
}
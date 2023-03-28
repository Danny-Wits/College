#include <stdio.h>
void traverse(int *);
int main()
{
    // declaration
    int ar[10];
    // Input
    printf("Please enter the elements of the array here:-\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &ar[i]);
    }
    // traverse/visit/access
    traverse(ar);

    return 0;
}
void traverse(int ar[])
{
    printf("The arrary is ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d,", ar[i]);
    }
    printf("\b.\n");
}
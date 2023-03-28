#include <stdio.h>
int x = 0, y = 1, z;
int fabonacci(int);

int main()
{
    int limit;
    printf("Please enter the limit of elements you want here:- ");
    scanf("%d", &limit);
    printf("The Fabonacci series is :- ");
    for (int i = 0; i < limit; i++)
    {
        printf("%d,", fabonacci(i));
    }
    printf("\b.\n");
    return 0;
}

int fabonacci(int i)
{
    if (i == 0 || i == 1)
    {
        return i;
    }
    else
    {
        return fabonacci(i - 1) + fabonacci(i - 2);
    }
}
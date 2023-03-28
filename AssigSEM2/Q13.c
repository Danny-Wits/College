#include <stdio.h>

int factorial(int);

int main()
{
    int num;
    printf("Please enter the number you want the factorial of : - ");
    scanf("%d", &num);
    printf("the factorial of the number is %d", factorial(num));
    return 0;
}

int factorial(int num)
{
    if (num == 0)
    {
        return 1;
    }
    return num * factorial(num - 1);
}
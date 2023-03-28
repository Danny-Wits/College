#include <stdio.h>
// stack declaraion
#define stack_size 4
int stack[stack_size];
int top = -1;
// function prototyping
void display(void);
void push(int);

// other global variables
short flag = 1;
int main()
{
    int item;
    display();

    while (flag)
    {
        char c;
        printf("Enter p to push and x to exit:- ");
        scanf("\n%c", &c);
        switch (c)
        {
        case 'p':
            printf("Please enter the number you want to push in the stack:- ");
            scanf("%d", &item);
            push(item);
            break;

        case 'x':
            flag = 0;
            break;
        }
    }
    display();
    return 0;
}

void display()
{
    if (top > -1)
    {
        printf("The elements of the stack are : -\n");
        for (int i = 0; i <= top; i++)
        {
            printf("%d, ", stack[i]);
        }
        printf("\b\b.\n");
    }
    else
    {
        printf("The stack is empty\n");
    }
}

void push(int item)
{
    if (top + 1 < stack_size)
    {
        top++;
        stack[top] = item;
        printf("[Successfully Pushed the element]\n");
    }
    else
    {
        flag = 0;
        printf("[Stack Overflow]\n");
    }
}
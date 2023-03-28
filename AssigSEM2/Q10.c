#include <stdio.h>
// stack declaraion
#define stack_size 4
int stack[stack_size];
int top = -1;

// function prototyping
void display(void);
void push(int);
void pop(void);

int main()
{
    // initialization
    push(10);
    push(20);
    char c;
    display();
    printf("Please enter x to pop a element:- ");
    scanf("%c", &c);
    if (c == 'x')
    {
        pop();
        display();
    }
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
        printf("[Stack Overflow]\n");
    }
}
void pop()
{
    if (top > -1)
    {
        top--;
        printf("[Successfully Popped the top element]\n");
    }
    else
    {
        printf("[Stack Underflow]\n");
    }
}
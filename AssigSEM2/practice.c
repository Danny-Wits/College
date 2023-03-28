#include <stdio.h>
#define stack_size 10
// dec
int stack[stack_size];
int top = -1;

void push(int);
void pop(void);
void peek(void);

int main()
{

    int item = 10;
    push(item);
    peek();
    item = 1;
    push(item);
    peek();
    item = 5;
    push(item);
    peek();
    pop();
    peek();
}

void push(int item)
{
    if (top == stack_size)
    {
        printf("Stack overflow");
    }
    else
    {
        top++;
        stack[top] = item;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack underflow");
    }
    else
    {
        top--;
    }
}

void peek()
{
    if (top == -1)
    {
        printf("The stack is empty");
    }
    else
    {
        printf("%d,", stack[top]);
    }
}
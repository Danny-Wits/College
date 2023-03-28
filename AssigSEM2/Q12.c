#include <stdio.h>
#include <string.h>
// expresion size
#define expresion_size 16
// stack declaraion
#define stack_size 16
char stack[stack_size][stack_size];
int top = -1;

//  function prototyping
void display();
void push(char *);
void pop(void);
char *peek(void);
void pre_post(char *);
short operator(char);

int main()
{
    char prefix[expresion_size];
    printf("Please enter the prefix expresion here:- ");
    scanf("%s", prefix);
    printf("The postfix statement is:- ");
    pre_post(strrev(prefix));
    return 0;
}

void push(char *c)
{
    if (top + 1 < stack_size)
    {
        top++;
        strcpy(stack[top], c);
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
    }
    else
    {
        printf("[Stack Underflow]\n");
    }
}

char *peek()
{
    if (top == -1)
    {
        return "Empty";
    }
    else
    {
        return stack[top];
    }
}
short check_operator(char c)
{
    char operator[] = {'+', '*', '-', '/'};
    for (int i = 0; i < 4; i++)
    {
        if (c == operator[i])
        {
            return 1;
        }
    }
    return 0;
}

void pre_post(char prefix[])
{
    int pr = 0;

    char a[16];
    char b[16];
    while (prefix[pr] != '\0')
    {
        char str[2] = {prefix[pr], '\0'};
        if (!check_operator(prefix[pr]))
        {
            push(str);
        }
        else
        {
            strcpy(a, peek());
            pop();
            strcpy(b, peek());
            pop();
            strcat(a, b);
            strcat(a, str);
            push(a);
        }
        pr++;
    }
    display();
}

void display()
{
    if (top > -1)
    {
        for (int i = 0; i <= top; i++)
        {
            printf("%s", stack[i]);
        }
    }
    else
    {
        printf("The stack is empty\n");
    }
}
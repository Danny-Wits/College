#include <stdio.h>
#include <string.h>
// expresion size
#define expresion_size 16
// stack declaraion
#define stack_size 16
char stack[stack_size];
int top = -1;

//  function prototyping
void push(char);
void pop(void);
char peek(void);
void in_post(char *);
short operator(char);
short percedence(char);

int main()
{
    char infix[expresion_size];
    printf("Please enter the infix expresion here:- ");
    scanf("%s", infix);
    printf("The prefix statement is:- ");
    in_post(strrev(infix));
    return 0;
}

void push(char c)
{
    if (top + 1 < stack_size)
    {
        top++;
        stack[top] = c;
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

char peek()
{
    if (top == -1)
    {
        return 'E';
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
short precedence(char a)
{
    if (a == 'E')
    {
        return -1;
    }
    int ap;
    switch (a)
    {
    case '+':
        ap = 0;
        break;
    case '-':
        ap = 0;
        break;
    case '*':
        ap = 1;
        break;
    case '/':
        ap = 1;
    }
    return ap;
}

void in_post(char infix[])
{
    int i = 0, p = 0;
    char postfix[expresion_size];
    while (infix[i] != '\0')
    {
        if (check_operator(infix[i]))
        { // minor tweek for prefix
            if (precedence(infix[i]) >= precedence(peek()))
            {
                push(infix[i]);
                i++;
            }
            else
            {
                postfix[p] = peek();
                p++;
                pop();
            }
        }
        else
        {
            postfix[p] = infix[i];
            i++;
            p++;
        }
    }

    while (1)
    {
        postfix[p] = peek();
        p++;
        if (top == 0)
        {
            break;
        }
        pop();
    }

    postfix[p] = '\0';
    printf("%s", strrev(postfix));
}
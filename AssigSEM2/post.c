while (infix[i] != '\0')
{
    if (check_operator(infix[i]))
    {
        if (precedence(infix[i]) > precedence(peek()))
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
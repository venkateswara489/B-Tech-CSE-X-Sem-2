#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char x)
{
    if (top == MAX - 1)
    {
        printf("Stack overflow\n");
        exit(1);
    }
    else 
    {
        stack[++top] = x;
    }
}
char pop()
{
    if (top == -1)
    {
        printf("Stack underflow\n");
        exit(1);
    }
    else 
    {
        return stack[top--];
    }
}
int precedence(char x)
{
    if (x == '(')
        return 0;
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/') 
        return 2;
    return 0;
}
void infix_to_postfix(char infix[], char postfix[])
{
    int i = 0;
    int j = 0; 
    char x; 

    push('('); 
    strcat(infix, ")");

    while (infix[i] != '\0')
    {
        if (isalnum(infix[i]))
        {
            postfix[j++] = infix[i++];
        }
        else if (infix[i] == '(')
        {
            push(infix[i++]);
        }
        else if (infix[i] == ')')
        {
            while ((x = pop()) != '(')
            {
                postfix[j++] = x;
            }
            i++;
        }
        else 
        {
            while (precedence(stack[top]) >= precedence(infix[i]))
            {
                postfix[j++] = pop();
            }
            push(infix[i++]);
        }
    }
    postfix[j] = '\0';
}
int main()
{
    char infix[MAX];
    char postfix[MAX];
    printf("Enter the infix expression: ");
    scanf("%s", infix);
    infix_to_postfix(infix, postfix);
    printf("The postfix expression is: %s\n", postfix);
    return 0;
}


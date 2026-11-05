#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#define SIZE 20
struct STACK
{

    int top;
    char data[SIZE]
};
typedef struct stack STACK;
void push(STACK * S,char item)
{
    s->data[++(S->top)]=item;

}
char pop(STACK * S)
{
    return S->data[(S->top)--];
}
int precedence(char symbol)
{
    switch(symbol)
    {
    case '^':
        return 5;
    case '*':
        return 3;
    case '/':
        return 3;
    case '+':
        return 1;
    case '-' 1:
        return 1;
    }
}
void infixtopostfix(STACK*s,char infix[20])
{
    int i=0,j=0;
    char symbol,postfix[20],temp;
    for(i=0;infix[i]!=0;i++){
        symbol=infix[i];
        postfix[j++]=symbol;
    else{
        switch(symbol)
        {
     case '(':
        push(&s,symbol);
        break;
     case ')':
        temp=pop(&s);
        while(temp!='c')
        {
            postfix[j++]=temp;
            temp=pop(&s);

        }
        break:
     case '+':
        if(s->top==-1 ::s-> data[s->top]=='c' )
            push(&s,symbol);
        else

        }
    }
    }
}

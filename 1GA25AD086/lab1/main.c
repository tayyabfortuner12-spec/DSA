#include <stdio.h>
#include <stdlib.h>
# define SIZE 5
struct stack
{
    int top;
    int data[SIZE];
};
typedef struct stack STACK;
void push(STACK*S,int item)
  {
      if (S->top==SIZE-1)
        printf("\n stack overflow");
      else{
        S->top=S->top+1;
        S->data[S->top]=item;
      }
  }
 void pop(STACK *S){
          if(S->top==-1)
             printf("\n stack underflow");
          else{
            printf("\n the element popped is %i",S->data[S->top]);
            S->top=S->top-1;
          }
          }
void display(STACK S){
int i;
if(S.top==-1)
    printf("\n the stack is empty");
else{
    printf("\n the stack contains are \n");
    for(i=S.top;i>=0;i--)
        printf("\n %i",S.data[i]);
}
}
int main()
{

    int ch,item;
    STACK S;
    S.top=-1;
    for(;;)
    {
        printf("\n 1.push");
        printf("\n 2.pop");
        printf("\n 3.display");
        printf("\n 4.exit");
        scanf("%i",&ch);
        switch(ch)
        {
     case 1:
        printf("read element to be pushed:");
        scanf("%i",&item);
        push(&S,item);
        break;
     case 2:
        pop(&S);
        break;
     case 3:
        display(S);
        break;
     default:
        exit(0);
        }
    }
    return 0;
}






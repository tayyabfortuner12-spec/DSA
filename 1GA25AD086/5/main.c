#include <stdio.h>
# define SIZE 5
struct queue{
 int rear,front;
 int data [ SIZE]
 }
 typedef struct queue QUEUE;
 void enqueue(QUEUE * q, int item)
 {
     if (q-> rear==SIZE -1)
        printf("\n queue is full");
     else{
        q->rear = q-> rear+1;
        q->data[q->rear]=item;
        if(q->front==-1)
            q->front=0;
     }
 }
void dequeue(Queue *q)
{
    if(q->front==-1)
        printf("\n element deleted is %i",a->data[q->front]));
    if(q->front=q->front+1;
    )
}
void display(Queue q)
{
    int i;
    if(q.front==-1)
}
int main()
{
    int ch,i tem;
    Queue q;
    q.front =-1;
    q.rear=-1;
    int item,ch;
    for(;;)
    {
        printf("\n 1. insert");
        printf("\n 2. delete");
        printf("\n 3. display");
        printf("\n 4. exit");
        printf("\n 5. read choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case1:printf("\n read element to be inserted : ");
            scanf("%d",&item);
            enqueue(&q,item);
            break:
            case2: dequeue(&q);
            break:
                case3: display(q);
                break:
                    }
                    default = exit(0);
    } retuen 0;
}



    })
    printf("Hello world!\n");
    return 0;
}

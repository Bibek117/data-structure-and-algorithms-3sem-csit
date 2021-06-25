//Implementation of Queue in array

#include<stdio.h>
#define SIZE 5
struct queue
{
    int item[SIZE];
    int front;
    int rear;
}q;
void enqueue(struct queue *q,int num)
{
    //checking queue overflow condition
    if(q->rear == SIZE-1)
    {
        printf("\nQueue overflow");
    }else{
        q->rear += 1;
        printf("%d",q->rear);
        q->item[q->rear] = num;
    }
}
void dequeue(struct queue *q)
{
    //checking queue underflow condition
    int deleted_item;
    if(q->rear < q->front)
    {
        printf("\nQueue underflow");
    }else{
        deleted_item = q->item[q->front];
        q->front += 1;
        printf("\nThe deleted item from queue is %d",deleted_item);
    }
}
void display(struct queue *q)
{
    int i;
    if(q->rear < q->front)
    {
        printf("\nQueue is empty");
    }else{
        printf("\nThe contents of queue are : ");
        for(i=0;i<=q->rear;i++)
        {
            printf("\n|%d|",q->item[i]);
        }
    }
}
int main()
{
    int choice,num;
    q.front = 0;
    q.rear = -1;
    printf("1.Enqueue \n2.Dequeue \n3.Display \n4.Exit \n");
    while(1)
    {
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("\nEnter the element you want to insert in queue : ");
            scanf("%d",&num);
            enqueue(&q,num);
            break;
        case 2:
            dequeue(&q);
            break;
        case 3:
            display(&q);
            break;
        case 4:
            exit(0);
        default:
            printf("\nInvalid input");
        }
    }
    return 0;
}

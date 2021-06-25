//program to implement circular queue
#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
struct cqueue{
	int item[SIZE];
	int rear;
	int front;
}q;
void enqueue( struct cqueue *q,int num){
	if(q->front==(q->rear+1)%SIZE){
		printf("\n circular queue is full");
	}
	else{
		q->rear=(q->rear+1)%SIZE;
		q->item[q->rear]=num;
	}

}
void dequeue(struct cqueue *q){
	int dt;
	if(q->rear==q->front){
		printf("\n circular queue is empty");
	}
	else{
		q->front=(q->front+1)%SIZE;
		 dt=q->item[q->front];
		 printf("\n deleted item  is %d",dt);

	}
}
void display(struct cqueue *q){
	int i;
    if(q->rear==q->front){
		printf("\n circular queue is empty");
	}else{
        printf("\n the content of circular queue :");
         for(i=(q->front+1)%SIZE;i<=q->rear;i=(i+1)%SIZE){
				printf("\t |%d| ",q->item[i]);
			}
		}

}
int main(){
	q.front=SIZE-1;
	q.rear=SIZE-1;
	int choice,num;
	printf("\n1.insert\n2.delete\n3.display\n4.exit\n");
    while(1){
	printf("\n enter your choice:");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("\n enter the number you want to insert to circular queue :\t");
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

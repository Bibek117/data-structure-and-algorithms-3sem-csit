#include<stdio.h>
#define SIZE 5
struct stack
{
    int item[SIZE];
    int top;
}s;
void push(struct stack *s,int num)
{
if(s->top==SIZE-1)
{
printf("\nStack overflow");
}
else
{
s->top=s->top+1;
s->item[s->top]=num;
}
}
void pop(struct stack *s)
{
int dt;
if(s->top==-1)
{
printf("\n Stack underflow");
}
else
{
dt=s->item[s->top];
s->top=s->top-1;
printf("\n Poped item = %d",dt);
}
}
void display(struct stack *s)
{
int i;
if(s->top==-1)
{
printf("\nStack is empty");
}
else
{
printf("\nThe content of stack is\n");
for(i=s->top;i>=0;i--)
{
printf("\n|%d|",s->item[i]);
}
}
}
int main()
{
    int num,choice;
    s.top=-1;
    printf("1.push\n2.pop\n3.Display\n4.Exit");
while(1)
{
    printf("\nEnter your choice:");
    scanf("%d",&choice);
switch(choice)
{
    case 1:
    printf("\nEnter the number you want to push:");
    scanf("%d",&num);
    push(&s,num);
    break;
    case 2:
    pop(&s);
    break;
    case 3:
    display(&s);
    break;
    case 4:
    exit(0);
}
}
return 0;
}

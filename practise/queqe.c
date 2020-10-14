#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int size;
    int rear;
    int front;
    int *Q;
};
void create(struct queue *q,int size)
{
    q->size=size;
    q->front=q->rear;
    q->Q=(int *)malloc(q->size*sizeof(int));
}
void enqueue(struct queue *q,int x)
{
    if(q->rear==q->size-1)
        printf("Queue is full");
    else
    {
         q->rear++;
        q->Q[q->rear]=x;
    }
}
void dequeue(struct queue *q){
    int x=-1;

if(q->front==q->rear)
    printf("Queue is empty");
else
    q->front++;
     x=q->Q[q->front];

}
void display(struct queue q)
{
    int i;
    for(i=q.front+1;i<=q.rear;i++)
    {
        printf("%d",q.Q[i]);
        printf("\n");
    }

}
int main()
{

    struct queue q;
    create(&q,2);
    enqueue(&q,6);
    enqueue(&q,2);
    enqueue(&q,3);
    enqueue(&q,9);
    display(q);
}

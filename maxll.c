#include<stdlib.h>
#include<stdio.h>
struct node
{
    int data;
    struct node *next;
}*first;
void create(int a[],int n)
{
    int i;
    struct node *last,*t;

    first=(struct node *)malloc(sizeof(struct node));
    first->data=a[0];
    first->next=NULL;
    last=first;


for( int i=1;i<n;i++)
{

    t=(struct node *)malloc(sizeof(struct node));
    t->data=a[i];
    t->next=NULL;
    last->next=t;
    last=t;
}
}
int max(struct node *p)
{
    int max=-32567;
    while(p!=0)
    {
        if(p->data>max)
            max=p->data;
        p=p->next;
    }
    return max;

}
int min(struct node *p)
{

    int min=32567;
    while(p)
    {


        if(min>p->data)
        min=p->data;
    p=p->next;
}
return min;
}
int main()
{
  struct node *temp;
    int a[]={1,2,3,4,5};
    create(a,5);
    printf("MAX = %d\n\n\n",max(first));
    printf("MIN = %d\n\n\n",min(first));
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;

}*efirst;
void ecreate(int a[],int n)
{   int i;
     struct node *last,*t;
    efirst=(struct node *)malloc(sizeof(struct node));
    efirst->data=a[0];
    efirst->next=NULL;
    last=efirst;

    for(i=1;i<n;i++)
    {
        t=(struct node *)malloc(sizeof(struct node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }

}
int search(struct node *p,int key)
{
       while(p!=NULL)
       {
           if(key==p->data)
            return p;
           p=p->next;
       }
       return NULL;
}
int rsearch(struct node *p,int key)
{
    if(p==NULL)
        return NULL;
    if(key==p->data)
    return p;
    return rsearch(p=p->next,key);


}
int main()
{
    int a[]={1,2,3,4,5};
    ecreate(a,5);
    printf("%d",rsearch(efirst,1));
return 0;
}


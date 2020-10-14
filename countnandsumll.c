#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
}*first=NULL;

void create(int a[],int n)
{
  int i;
   struct node *t,*last;
  first=(struct node *)malloc(sizeof(struct node));
  first->data=a[0];
  first->next=NULL;
  last=first;

  for(i=1;i<n;i++)
  {
    t=(struct node *)malloc(sizeof(struct node));
    t->data=a[i];
    t->next=NULL;
    last->next=t;
    last=t;
  }
}
void display(struct node *p)
{
while(p!=0)
{
  printf("%d ",p->data);
  p=p->next;
}
}
int count(struct node *c)
 {
   int cc=0;
  while(c!=0)
  {
    cc++;
    c=c->next;
  }
  return cc;
}
int rcount(struct node *r)
{
  if(r==0)
  return 0;
  else
  return rcount(r->next)+1;
}
int sum(struct node *s)
{
  int sum=0;
  while(s!=NULL)
  {
    sum=sum+s->data;
    s=s->next;
  }
  return sum;
}
int rsum(struct node *rs)
{
  if(rs==0)
  return 0;
  else
  return rsum(rs->next)+(rs->data);
}
int main(){
struct node *temp;
int a[]={1,4,7,8,5};
create(a,5);
display(first);
printf("\n");
printf(" count = %d   ",count(first));
printf("\n");
printf("rcount(first)=%d\n",rcount(first));
printf("%d  ",sum(first));
printf("\n");
printf("rsum = %d\n",rsum(first));
return 0;

}

#include<iostream>
#include<stdlib.h>
using namespace std;
struct node {
    int data;
    struct node *next;
};
void display(struct node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<endl<<endl;
        head=head->next;
    }

}
int main(){
    struct node *last;
     node *head = new node();
     head->data=1;
     head->next=NULL;
     last=head;
    node *first = new node();
    first->data=2;
    first->next=NULL;
    last->next=first;
    last=first;
    node *second = new node();
    second->data=3;
    second->next=NULL;
    last->next=second;
    display(head);
    //display(head); will print second time


}
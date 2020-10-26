#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    struct node *next;
}*head=NULL;
void create(int a[],int n){
    node *last;
    head=new node();
    head->data=a[0];
    head->next=NULL;
    last=head;
    for(int i=1;i<n;i++){
         node *t=new node();
         t->data=a[i];
         t->next=NULL;
         last->next=t;
         last=t;

    }
}
int deletenode(node *head) { 
    if(head==NULL){
        return NULL;
    }
    else{
        node *temp = head->next;
        head->data=temp->data;
        head->next=temp->next;
       
        temp->next=head->next;
        free(temp);
    }


}
void display(node *head){
    while(head!=NULL){
        cout<<head->data<<"  ";
        head=head->next;
    }
}
int main(){
    int a[]={1,2,3,4,5,6,7,8,9};
    create(a,9);
    cout<<"before deletion ";
  display(head);
    deletenode(head);
    cout<<"After deletion ";
     display(head);
}

//Fast solution is to copy the data from the next node to the node to be deleted and delete the next node.
#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    node *next;
    node()
    {
        next=NULL;
    }
};
node *deletenode(node *head){
    if(head==NULL){
        return NULL;
    }
    else{
        node *temp = head->next;
        free(head);
        return temp;
    }

}
void display(node *head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;  
    }
}
int main(){


      struct node *head,*last;//in c we cant use new pointer without declaring it 
     head = new node();
    head->data=1;
    head->next=NULL;
    last = head;
    node *first = new node();
    first->data=2;
    last->next=first;
    last=first;
    node *second = new node();
    second->data=3;
    last->next=second;
    last=second;
    deletenode(head);
    display(head);
}
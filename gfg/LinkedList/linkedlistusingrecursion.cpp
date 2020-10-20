#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    node *next;

};
void rdisplay(node *head){
    if(head==NULL){
        return;
    }
    cout<<head->data<<" ";
    rdisplay(head->next);
}
int main(){

    node *last;
    node *head = new node();
    head->data=100;
    head->next=NULL;
    last=head;
    node *first = new node();
    first->data=200;
    first->next=NULL;
    last->next=first;
    last=first;
    rdisplay(head);

}
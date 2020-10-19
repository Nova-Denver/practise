#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    node *next;
};
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


}
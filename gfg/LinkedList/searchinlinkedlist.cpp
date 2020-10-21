#include<iostream>
#include<stdlib.h>
using namespace std;
struct node {
    int data;
    node *next;
    node(){
        next=NULL;
    }
};
int search(node *head,int key){
    int pos=1;
    while(head!=NULL){
        if(key==head->data){ 
        return 1;
        }
        else
        {
            pos++;
            head=head->next;
        }
        
    }
    return -1;
}
int main(){
    node *last;
    node *head = new node();
    head->data=100;
    last=head;
    node *f = new node();
    f->data=200;
    last->next=f;
    last=f;
        node *s = new node();
    s->data=200;
    last->next=s;
    last=s;
    if(search(head,1000)==1)
    cout<<"gggvhvg";
    else
    {
        cout<<"5666";
    }
    

}
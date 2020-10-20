#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    node *next;
    node(int x){
        data = x;
        next = NULL;
    }
};
node * create(int a[],int n){
    node *last,*t;
    node *head = new node(a[0]);
    // head->data=a[0];
    // head->next=NULL;
    last=head;
    for(int i=1;i<n;i++){
        t=new node(a[i]);

        last->next=t;
        last=t;
    }
    return head;
}
void display(node * head){
    while(head!=NULL){
        cout<<head->data<<"   ";
        head=head->next;
    }
}
void rdisplay(node *head){
    if(head==NULL){
        return;
    }
    cout<<head->data<<" ";
    rdisplay(head->next);
}
int main(){
   // struct node *p;
    int a[100]={1,2,3,4,5,6,7,8,9,70};
    node * head = create(a,10);
    display(head); 
}

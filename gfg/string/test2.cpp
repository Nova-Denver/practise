#include <iostream>
#include <stdlib.h>
using namespace std;
struct node {
        int data;
        node *next;
}*head=NULL;
void create(int a[],int n){
        node *last,*t;
        node *head = new node();
        head->data=a[0];
        head->next=NULL;
        last=head;
        for(int i=1; i<n; i++) {
                t=new node();
                t->data=a[i];
                t->next=NULL;
                last->next=t;
                last=t;
        }
}
void display(node *head){
        while(head!=NULL) {
                cout<<head->data<<"   ";
                head->next;

        }
}
void rdisplay(node *head){
        if(head==NULL) {
                return;
        }
        cout<<head->data<<" ";
        rdisplay(head->next);
}
int main(){
        node *p;
        int a[100]={1,2,2,5,4,7,8,9,8,44,50};
        create(a,11);
        display(head);
}

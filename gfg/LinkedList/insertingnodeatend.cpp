#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    node *next;
};

node *insertend(node *head,int x){


    node *temp = new node();
      temp->data=x;
     temp->next=NULL;
    if(head==NULL)

return temp; 

  
    node *curr = head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
return head;
}
void display(node *head){
    while(head!=NULL){
        cout<<head->data<<"  ";
        head=head->next;


    }

}
int main(){
    node *head = NULL;
 head = insertend(head,20);
    insertend(head,30);
    insertend(head,40);
    insertend(head,50);
    display(head);
    


}
    
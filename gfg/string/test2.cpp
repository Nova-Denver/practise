#include <iostream>
#include <stdlib.h>
using namespace std;
struct node {
        int data;
        node *next;
}*head=NULL;
void create(){
        cout<<"Enter the node \n";
        cin>>head->data;
        head->next=NULL;
        node *next_node;
        next_node=head;
        next_node->next=NULL;
        head->next=next_node;
}
node *display(node *head)
{
        while(head!=NULL) {
                cout<<head->data<<"\t";
                head=head->next;
        }

}
int main(){
        int n;
        cout<<"Enter the number of nodes you want to insert ";
        cin>>n;
        for(int i=0; i<n; i++) {
                create();
        }
        display(head);

}

#include<iostream>
#include<stdlib.h>
using namespace std;
class node
{
public:
int data;
node *next;  
};
int main(){

     node *head = NULL;
     node *first = NULL;
     node *second = NULL;

     head = new node();
     first = new node();
     second = new node();
     head->data=1;
     head->next=second;
     first->data=2;
     first->next=second;
     second->data=3;
     second->next=NULL;
     return 0;

}
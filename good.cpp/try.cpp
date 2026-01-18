#include<iostream>
using namespace std ;
struct node{
    int data;
    node*next;
};
node*next,*first,*temp,*ttemp,*p;
void create_First(int val){
first=new node ;
first->data=val;
first->next=NULL;
}
    //function to add a node after last node 

void ADD_NODE(int x){
    temp=first ;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    ttemp=new node;
    ttemp->data=x;
    ttemp->next=NULL;
    temp->next=ttemp;
}
//for display the element of link list
void display(){
    temp=first;
    while (temp->next!=NULL){
        cout<<temp->data<<" ";
         temp=temp->next;
    }
    cout<<endl; 
}
int main(){
    create_First(10);
    ADD_NODE(80);
    display();
}
#include<iostream>
using namespace std;

struct node{
    int val;
    node *next;
};
node* head=NULL;

void insertfirst(int X){
    node* newitem= new node();
    newitem->val=X;
    newitem-> next=head;
    head = newitem;
}

void insertlast(int X){
    node *newitem= new node();
    if(head==NULL){
        newitem-> val= X;
        newitem->next=head;
        head=newitem;
    }else{
        newitem->val=X;
        node* temp;
        temp=head;

        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newitem;
        newitem-> next=NULL;
    }
    
}
void insertafter(int X, int target){
    node* temp=head;
    while(temp!=NULL){
        if(temp->val==target){
            node* newitem= new node();
            newitem->val=X;

            newitem->next= temp->next;
            temp->next=newitem;
            return ;
        }
        temp=temp->next;
    }

}
void deletefirst(){
    if(head==NULL){
        return ;
    }else{
        head=head->next;
    }
}

void deletelast(){
    if(head==NULL){
        return ;
    }else{
        node *temp=head;
        node* prev=NULL;

        while(temp->next!=NULL){
            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
    }
}


void Display(){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp= temp->next;
    }
}

int main(){
    insertfirst(10);
    insertfirst(15);
    insertfirst(20);
    Display();

    cout<<endl;

    insertlast(100);
    insertlast(200);
    Display();
    cout<<endl;


    insertafter(10,20);
    Display();
    cout<<endl;

    deletefirst();
    Display();
    cout<<endl;

    deletelast();
    Display();
}
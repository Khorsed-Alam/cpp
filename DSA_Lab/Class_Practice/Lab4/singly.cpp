#include<iostream>
using namespace std;
struct node
{
    int val;
    node *next;
};

node* head=NULL;

void insrtinstart(int x)
{
    node* newitem=new node();
    newitem->val=x;
    newitem->next=head;
    head= newitem;
}

void insertLast(int val)
{

    node* newItem=new node();
    if(head==NULL)
    {
        newItem->val=val;
        newItem->next=head;
        head= newItem;

    }
    else
    {
        newItem-> val=val;
        node* temp;
        temp=head;

        while(temp->next !=NULL)
        {
            temp=temp->next;
        }

        temp->next=newItem;
        newItem->next=NULL;

    }


}

void insertAfter(int val, int Target)
{

    node* temp=head;
    while(temp!=NULL)
    {

        if(temp->val== Target)
        {
            node* newItem= new node;
            newItem->val=val;

            newItem->next = temp->next;
            temp->next= newItem;
            return;

        }
        temp=temp->next;
    }


}

void deleteBegin(){

if(head==NULL){
    return;
}else{
head=head->next;
}

}

void deleteLast(){
if(head==NULL){
    return;
}else{

  node* temp=head;
  node* prev=NULL;
  while(temp->next!=NULL){
    prev=temp;
    temp=temp->next;
  }
  prev->next=NULL;

}
}


void Display()
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}


int main()
{
    insrtinstart(4);
    insrtinstart(5);
    insrtinstart(6);
    Display();

    cout<<endl;

    insertLast(10);
    Display();

    cout<<endl;
    insertAfter(5,4);
    insertAfter(100,10);

    Display();

    cout<<endl;
    deleteBegin();
    Display();

    cout<<endl;
      deleteLast();
    Display();
}

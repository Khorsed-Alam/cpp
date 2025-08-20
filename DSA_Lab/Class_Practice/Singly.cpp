#include<iostream>
using namespace std;

struct node {
    int val;
    node *next;
     
};

node* head = NULL;

void insertAtStart(int x) {
    node* newItem = new node();
    newItem->val = x;
    newItem->next = head;
    head = newItem;
}

void insertLast(int val) {
    node* newItem = new node();
    newItem->val = val;
    newItem->next = NULL;

    if (head == NULL) {
        head = newItem;
    } else {
        node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newItem;
    }
}

void insertAfter(int val, int target) {
    node* temp = head;
    while (temp != NULL) {
        if (temp->val == target) {
            node* newItem = new node();
            newItem->val = val;
            newItem->next = temp->next;
            temp->next = newItem;
            return;
        }
        temp = temp->next;
    }
}

void deleteBegin() {
    if (head == NULL) return;
    node* temp = head;
    head = head->next;
    delete temp;
}

void deleteLast() {
    if (head == NULL) return;

    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    node* temp = head;
    node* prev = NULL;
    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    delete temp;
}
void deleteTarget(int target){
     if (head == NULL)
      return;

      node*temp= head;
      node *prev=NULL;
      while(temp->next!=NULL && temp->val !=target){
        prev=temp;
        temp=temp->next;
      }
      if(prev==NULL){
        head=NULL;
      }else{
        prev->next=temp->next;
      }

}

int  Length(){
    node *temp=head;
    int count =0;
    while(temp != NULL){
        temp=temp->next;
        count++;
    }
    return count;
}

void reverseList(){
    node* temp= head;
    node * prev= NULL;
    node *after=NULL;
    while(temp!=NULL){
        after=temp->next;
        temp->next= prev;
        prev=temp;
        temp=after;
    }
    head=prev;

}
int  midpoint(){
    node* temp=head;
    int mid;
    mid= Length()/2;

    for(int i=0;i<mid;i++){
        temp=temp->next;
    }
    return temp->val;
}
int MIDPOINR(){
    node* temp1=head;
    node* temp2=head;

    while(temp1!= NULL && temp2 != NULL)
    {
        temp1= temp1->next;
        temp2= temp2->next->next;
    }
    return temp1->val;
}
void BubbleSort(){
    node *i;
    node *j;
    

    for(i=head;i-> next!= NULL;i= i->next){
        for(j=head; j->next != NULL; j= j->next){

            if(j->val > j->next->val){
                int  temp= j->val;
                j->val= j->next ->val;
                j->next->val=temp;
            }

        }
    }

}
void Display() {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    insertAtStart(4);
    insertAtStart(2);
    insertAtStart(6);
    insertLast(10);
   // insertLast(20);
    Display();

    insertLast(10);
    Display();

    insertAfter(5, 4);
    insertAfter(100, 10);
    Display();

    deleteBegin();
    Display();

    deleteLast();
    Display();

    deleteTarget(10);
    Display();

    int list_size= Length();
    cout<<list_size<<endl;

    reverseList();
    Display();

  int mid_val=midpoint();
  cout<<mid_val<<endl;

  int MID_val=MIDPOINR();
  cout<<MID_val<<endl;


  cout<<"Bubble sort: ";
BubbleSort();
Display();
  

  




     
}

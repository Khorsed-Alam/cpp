#include<iostream>
using namespace std;
int main(){
   
    int n1;
    int n2;
    int n3;
    int sum;
    int sub;
    cout<<"Enter the first Number: ";
    cin>>n1;
    cout<<"Enter the second Number: ";
    cin>>n2;
    cout<<"Enter the Third Number: ";
    cin>>n3;

    
    if(n1>n2){
        sum=n1+n2;
        cout<<"After condition apply: "<<sum;
    }
    else{
         sub=n1-n2;
        cout<<"After Condition apply: "<<sub;
    }


    

}
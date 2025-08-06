#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    int key;
    cout<<endl<< "Enter key value: ";
    cin>>key;
     bool Found =false;

    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"Found at array index "<<i<<endl;
            Found=true;
            break;
        }
    }
    if(!Found)
    cout<<"Element Not Founded:";
}
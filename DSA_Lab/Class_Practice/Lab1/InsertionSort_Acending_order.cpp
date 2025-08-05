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
    cout<<"Original array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;

        while(j>=0 && arr[j]<key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }

    cout<<endl  <<"Sortred Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
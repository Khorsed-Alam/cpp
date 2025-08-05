#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }


    for(int i=0;i<n;i++){

        int minIndex=i;

        for(int j=i+1;j<n;j++){

            if(arr[minIndex]<arr[j]){
                minIndex=j;
            }

        }
            int temp=arr[i];
    arr[i]=arr[minIndex];
    arr[minIndex]=temp;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}


#include<iostream>
using namespace std;

void BinarySearch(int arr[], int target, int n);

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
    cout<<endl;

    //cout<<"Linear Search: "<<endl;
    int target;
    cout<<"Enter target value: "<<endl;
    cin>>target;

    BinarySearch(arr,target,n);


}
void BinarySearch(int arr[],int target, int n){

    int low=0;
    int high= n-1;


        while(low<=high){

                int mid=(low+high)/2;

        if(arr[mid]==target){
            cout<<"Target Founded "<< mid<<endl;
            break;
        }
       else if(target> arr[mid])
        {
            low=mid+1;
        }
         else{
            high=mid-1;
        }


    }
    if(low>high){
       //cout<<"Not founded: ";
       cout<<"-1";

      // return -1;
    }


}

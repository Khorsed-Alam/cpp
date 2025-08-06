#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"enter array size:";
    cin>>n;

    int arr[n];
    cout<<"Array input:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl<<"Original array:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    int Target;
    cout<<endl<<"target value: ";
    cin>>Target;
    bool found=false;


    int low=0;
    int high=n-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]==Target){
            cout<<"Target Founded: "<<mid<<endl;
            found =true;
            break;
        }
        else if(Target>arr[mid]){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    if(low>high){
        cout<<"-1";
    }

}

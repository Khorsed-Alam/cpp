#include<iostream>
#include<string>
using namespace std;

int SquareRoot(int N){
    if(N==0 || N==1){
        return N;
    }

    int low=0;
    int high=N;
    int result=0;

    while(low<=high){
        int mid= (low+high)/2;
        long long Square= (long long ) mid *mid;


        if(Square==N){
            return mid;
        }else if(Square<N){
            low=mid+1;
            result =mid;
        }else{
            high=mid-1;
        }

    }
    return result;
}

int main(){
    int N;
    cin>>N;

    int sqrt_Value=SquareRoot(N);
    
    cout<<sqrt_Value<<endl;
}
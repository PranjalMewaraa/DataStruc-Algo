#include<iostream>
using namespace std;

int maxSubarraySum(int arr[],int n){
    int sum = 0 ;
    int maxi = arr[0];
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        maxi = max (maxi,sum);
        if(sum<0){
            sum=0;
        }
    }
    return maxi;
    
}


int main(){
    int arr[5]={-1,1,2,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"MaxSubArraySum is "<<maxSubarraySum(arr,n+1);
    

    return 0;
}
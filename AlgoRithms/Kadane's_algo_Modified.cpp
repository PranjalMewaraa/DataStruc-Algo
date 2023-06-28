#include<iostream>
using namespace std;

int maxSubarraySum(int arr[],int n){
    int sum = 0 ;
    int maxi = -199999;
    int maxelem = -199999;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        if(sum<arr[i]){
            sum=arr[i];
        }
        maxi = max (maxi,sum);
        
    }
    return (maxi);
    
}


int main(){
    int arr[5]={-10,-11,-2,-3,-4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"MaxSubArraySum is "<<maxSubarraySum(arr,n);
    

    return 0;
}
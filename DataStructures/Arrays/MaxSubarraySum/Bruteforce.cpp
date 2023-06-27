#include<iostream>
using namespace std;

int maxSubarraySum(int arr[],int n){

    int largestsum=0;
    for(int i=0;i<n;i++){
        for (int j = i; j < n; j++)
        {
            int curr_sum =0;
            for (int k = i; k < j; k++)
            {
                curr_sum += arr[k];
            }
            largestsum = max(curr_sum,largestsum);
            
        }
        
    }
    return largestsum;

}


int main(){
    int arr[5]={-1,1,2,-3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"MaxSubArraySum is "<<maxSubarraySum(arr,n+1);
    

    return 0;
}
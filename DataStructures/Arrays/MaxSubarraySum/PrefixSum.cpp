#include<iostream>
using namespace std;

int maxSubarraySum(int arr[],int n){
    int ps[n];
    for (int i = 0; i < n; i++)
    {   
        if(i==0){ 
            ps[i]=arr[i];
        }else{
            ps[i]=ps[i-1] + arr[i];
        }
    }
    

    int largestsum=0;
    for(int i=0;i<n;i++){
        for (int j = i; j < n; j++)
        {
            int curr_sum =0;
            curr_sum = ps[j] - ps[i-1];
            largestsum = max(curr_sum,largestsum);
            
        }
        
    }
    return largestsum;

}


int main(){
    int arr[5]={-1,1,2,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"MaxSubArraySum is "<<maxSubarraySum(arr,n+1);
    

    return 0;
}
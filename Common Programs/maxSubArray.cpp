#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int  arr[n];
    for(int i = 0; i <n; i++)cin>>arr[i];
    
    // int mx = INT_MIN;
    // int start = -1;
    // int en = -1;

    // for(int i = 0; i < n ; i++){

    //     for(int j = i; j < n; j++){
    //         int sum = 0;
    //         for(int k = i; k <= j; k++){
    //             sum += arr[k];
    //         }
    //         mx = max(mx,sum);
    //         if(mx == sum){
    //             start = i;
    //             en = j;
    //         }
    //     }
    // }

    // cout<<"The Sub Array is:"<<endl;
    // for(int i = start ; i <= en; i++)cout<<arr[i]<<" ";


    //O(n2) complexity

    // int currentSum[n+1];

    // currentSum[0] = 0;

    // for(int  i = 1; i<=n; i++){

    //     currentSum[i] = currentSum[i-1]+arr[i-1];
    // }

    // int maxSum = INT_MIN;

    // for(int i = 1; i <= n ; i++){
    //     int sum = 0;
    //     for(int j = 0; j <i; j++){
    //         sum = currentSum[i] - currentSum[j];
    //         maxSum = max(maxSum, sum);
    //     }
    // }

    // cout<<" "<<maxSum<<endl;



    //Kadane's algorithm
    int currSum = 0;
    int begin = -1, end = -1;
    int maxSum = INT_MIN;

    for(int i = 0; i < n; i++){

        currSum += arr[i];
        if(currSum < 0){
            begin = i+1;
            currSum = 0;
        }
        maxSum = max(maxSum, currSum);
        if(maxSum == currSum) end = i;
    }

    cout<<"\nMax sum is: "<<maxSum<<endl<<"The Sub Array is:";
    for(int i = begin; i <=end; i++)cout<<" "<<arr[i];


 return 0;
}
/*
Find the Subarray with max sum
O(n) time Complexity 

-ve numbers will always reduce the sum so exclude
 them in  the subarray with max sum. 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int  arr[n];
    for(int i = 0; i <n; i++)cin>>arr[i];
    
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
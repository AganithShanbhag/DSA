/*
Circular array max- Sum array Sum 
*/

#include<iostream>
#include<climits>

using namespace std;

int kadane(int arr[], int n){

    int mx = INT_MIN;
    int currSum = 0;

    for(int i = 0; i < n; i++){

        currSum += arr[i];

        if(currSum < 0){
            currSum = 0;
        }
        mx = max(currSum, mx);
    }

    return mx;
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i < n ; i++){
        cin>>arr[i];
    }

    int nonWrapsum = kadane(arr, n);
    int sum = 0;

    for(int i = 0; i < n; i++){
        sum += arr[i];
        arr[i] = -arr[i];
    }

    int wrapSum = sum + kadane(arr, n);
   cout<<"\nMax sum of Circular Sub Array: "<<max(wrapSum, nonWrapsum);

    return 0;
}

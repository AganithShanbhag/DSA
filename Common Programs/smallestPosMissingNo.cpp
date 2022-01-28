#include<bits/stdc++.h>
using namespace std;

int smallestPosNo(int arr[], int n){
    
    int ans = INT_MIN;
    sort(arr, arr+n);

    for(int  i = 0; i < n; i++){

        if(arr[i]>=0){
            if(arr[i+1]!= arr[i]+1) return arr[i]+1;
        }
    }


    return ans;
}
int main(){

    int n ;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)cin>>arr[i];



    cout<<smallestPosNo(arr, n)<<endl;

    return 0;
}
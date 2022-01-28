/*

Given an array
find a continuous subarray that sums upto the number given
*/

#include<bits/stdc++.h>
using namespace std;


/*
*****O(n2) Method*******

int start = -1, endd = -1;
void subArray(int array[], int n ,int s){

    for(int i = 0; i < n ; i++){
        int sum = 0;
        for(int j = i; j < n; j++){

            sum += array[j];
            if(sum == s){
                start = i;
                endd = j;
            }
            else if(sum > s) break;
        }
    }
}
*/



int main(){

    int n, s;
    cin>>n;
    int  arr[n];
    for(int i = 0; i < n; i++)cin>>arr[i];
    cout<<endl;
    cout<<"\nEnter the sum: ";
    cin>>s;

   /*
    Method 1 - O(n2)
    subArray(arr, n, s);

    for(int i = start; i <= endd; i++)cout<<" "<<arr[i];
    */

    //method 2

    int i = 0, j = 0, st = -1, en = -1, sum = 0;

    while(j<n && sum+arr[j] <= s){
         sum += arr[j];
         j++;
    }

    if(sum == s){
        cout<<i+1<<" "<<j+1<<endl;
        return 0;
    }

    
    while(j<n){
      sum += arr[j];
      while(sum > s){
          sum -= arr[i];
          i++;
      }  

      if(sum == s){
          st = i+1;
          en = j+1;
          break;
      }
      j++;
    }

    cout<<st<<" "<<en;

    return 0;
}
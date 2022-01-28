#include<bits/stdc++.h>

using namespace std;

int binarySearch(int arr[],int n, int key){

    int s = 0, e = n;

    while(s<=e){
       int mid = (s+e)/2;

          if(arr[mid] == key){
              return mid;
          } 
          else if(arr[mid] > key){
            e = mid - 1;
        }
          else {
            s = mid+1;
          }

    }

    return -1;
}
int main(){

    int array[7] = {90, 180, 789, 889, 990, 7869, 567800}; //array should be sorted
    int key = 90;

    cout<<"\nThe element is present in the index: "<<binarySearch(array, 7, key);
    return 0;
}
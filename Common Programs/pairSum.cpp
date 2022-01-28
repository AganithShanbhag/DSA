#include<bits/stdc++.h>
using namespace std;

int main(){

    int target;
    cin>>target;


    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i < n; i++)cin>>arr[i];


    //logic
    int beg = 0;
    int end = n-1;

    while(beg<end){

        if(arr[beg]+arr[end] == target){
            cout<<"\nSuccess. The Indices are :"<<beg<<" "<<end;
            break;
        }
        else if(arr[beg]+arr[end] < target){
            beg++;
        }
        else{
            end--;
        }
    }

    if(beg>=end)cout<<"\nNot Possible"<<endl;


    return 0;
}
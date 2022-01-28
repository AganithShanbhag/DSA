/*

An array called idx that uses the method of freq of occurence
if the element has occuered before then that particular index will not be -1

array: 5 4 6 3 5 3
idx = -1 -1 -1 -1 -1 -1 -1

idx[arr[i]] = i;

i= 0 {idx = -1 -1 -1 -1 -1 0 -1   Index 5 updated with i, min = INT_MAX}
i= 1 {idx = -1 -1 -1 1 1 0 -1  Index 4 updated with i, min = INT_MAX}
i= 2 {idx = -1 -1 -1 -1 -1 0 2   Index 6 updated with i, min = INT_MAX}
i= 3 {idx = -1 -1 -1 3 -1 0 2   Index 3 updated with i, min = INT_MAX}
i= 4 {idx = -1 -1 -1 3 4 0 2   Index 5 not updated, min = 0}
i= 5 {idx = -1 -1 -1 3 4 0 2   Index 3 not updated, min = 0 still }

*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; 
    cin>>n;
    int array[n];

    for(int i = 0; i < n ; i++)cin>>array[i];

    cout<<"Initialization Done\n";

    //logic
    const int N = 1e3+2;
    int idx[N];
    for(int i = 0 ; i < N; i++)idx[i] = -1;
    
    int minim = INT_MAX;

   //for(int i = 0; i < N; i++)cout<<" "<<idx[i];

    for(int i = 0; i < n; i++){

        if(idx[array[i]] != -1){
            minim = min(minim, idx[array[i]]);
        }
        else{
            idx[array[i]] = i;
        }
    } 

    if(minim == INT_MAX)cout<<"-1"<<endl;
    else{
        cout<<minim+1<<endl;
    }


    return 0;
}
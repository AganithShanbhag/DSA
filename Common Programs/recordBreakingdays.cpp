/*
Record Breaking days-
1. Strictly greater than all previous values
2. Value should be greater than following value

*/ 

#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    int visitors[n];

    for(int i = 0; i < n; i++)cin>>visitors[i];


    //logic

    if(n == 1){
        cout<<"1 day"<<" "<<visitors[0];
        return 0; 
    }
    
    int days = 0;
    int mx = -1;

    cout<<"\nThe Record Breaking days are: ";

    for(int i = 0; i < n; i++){

        if(visitors[i] > mx && visitors[i] >visitors[i+1]){
            cout<<", "<<i+1;
            days++;
        }

        mx = max(visitors[i], mx);
    }

    cout<<"\nTotal number of record breaking days: "<<days;



    return 0;
}
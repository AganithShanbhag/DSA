/*
Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-array which adds to a given number S.
*/
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        int add = 0, start = 0,stop = 0;
        vector<int>vec;
        int i ,j;
        
        for(i = 0; i < n; i++){
             add = arr[i];
                for(j = i+1; j < n; j++){
                    
                    
                            if(add == s){
                                break;
                                
                            }
                                        
                            else if(add > s)break;
                            
                            else add += arr[j];
                
            }
            
            
             if(add == s){
                    
                                vec.push_back(i+1); 
                                vec.push_back(j);
                    break;
                }
       }
       
       if(vec.empty()) vec.push_back(-1);
       
       
       return vec;
    }
};


/*

take an element
add with next element until >= sum 

if greater than then false if equal to then note i and j 


for(i = 0 to n-1){
add = arr[i];
    for( j = i+1; j < n; j++){
        if(add == sum){
            start = i; 
            stop = j;
            break;
        }
        
        if(add > sum)break;
        add += arr[j];
        
    }
    
     if(add == sum){
            break;
        }
}
*/

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
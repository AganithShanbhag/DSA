/*Given an array Arr (distinct elements) of size N. Rearrange the elements of array in zig-zag fashion. 
The converted array should be in form a < b > c < d > e < f. The relative order of elements is same in the output
 i.e you have to iterate on the original array only.

 */



// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	


    	
	void swap(int *arr, int index){
	    int temp = arr[index];
	    arr[index] = arr[index+1];
	    arr[index+1] = temp;
	}
	
	
	
	// Program for zig-zag conversion of array
	void zigZag(int arr[], int n) {
	    
	    int k = 1; //
	    
	    for(int i = 0; i < (n-1); i++,k++){
	        if((k%2) == 1){
	            //odd number - means less than comparison
	            
	            if(arr[i] > arr[i+1]){
	                swap(arr, i);
	            }
	        }
	        
	        if((k%2) == 0){
	            //even number -- means greater than comparison
	            
	            if(arr[i] < arr[i+1]){
	                swap(arr, i);
	            }
	        }
	    }
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.zigZag(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends
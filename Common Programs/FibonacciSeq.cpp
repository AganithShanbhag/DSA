#include<iostream>
#include<stdlib.h>
using namespace std;

void fibo(int n){

    static int t0 = 0, t1 = 1, nextTerm;

    if(n > 0){
        nextTerm = t0 +t1;
        t0 = t1;
        t1 = nextTerm;
        cout<<" "<<nextTerm;
        fibo(n-1);
    } 

}

int main(){

    system("CLS");
    int n; 
    cout<<"Enter the number of terms:";
    cin>>n;
    int t1 = 0;
    int t2 = 1;
    cout<<"Fibonacci Series - \n";
    cout<<t1<<" "<<t2;

   fibo(n-2);
    
    return 0;
}

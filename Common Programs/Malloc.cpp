#include<iostream>
#include<cstdlib>

int main(){
    
     using namespace std;
     const int n = 5;

    int *ptr = (int*) malloc(n*sizeof(int));

    if(!ptr){
        cout<<"Memory allocation failed";
        exit(1);
    }
        else{

            for(int i = 0; i < n ; i++){
                cout<<"\nEnter element"<<i+1<<":";
                cin>>ptr[i];

            }

            cout<<"initialised the memory\nOutput:\n";

            for(int i = 0; i < n; i++){
                cout<<*(ptr+i)<<endl;
            }

    }

    free(ptr);


  return 0;  
}


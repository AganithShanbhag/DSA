#include<iostream>
#include<cmath>
#include<stdlib.h>

void checkPrime(int *);

int main(){
    system("CLS");
    int lowerBound, upperBound;
    std::cout<<"enter the lower Bound and the Upper Bound"; 
    std::cin>>lowerBound>>upperBound;

    for(int i = lowerBound; i <= upperBound; i++){
        checkPrime(&i);
    }

    return 0;
}

void checkPrime(int *no){
    if(*no == 0 || *no == 1)
    exit(0);

    bool flag = true;
    for(int i = 2; i <=sqrt(*no); i++){
        //sqrt(no) using cmath
        if((*no)%i == 0){
            flag = false;
            break;
        }
    }

    if(flag)
    std::cout<<" "<<(*no);
    }

//Chocolate Problem

#include<bits/stdc++.h>
using namespace std;

int main(){

    int money;
    cin>>money;

    int choco = 0, unwrap = 0, wrapp = 0, total = 0;

    choco = money;
    wrapp = choco;
    total += choco;

    while(wrapp >= 3){
        choco = wrapp/3;
        total += choco;
        unwrap = wrapp % 3;
        wrapp = choco + unwrap;
    }

    cout<<"\nFor the money: "<<money<<"max choco: "<<total;

    return 0;
}
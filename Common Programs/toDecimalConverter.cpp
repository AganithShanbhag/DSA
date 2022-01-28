#include<bits/stdc++.h>
using namespace std;
//binary to decimal

int binaryToDecimal(int n){
int ans = 0;
int x = 0;

while(n > 0){
int y = n%10;
ans += y*pow(2, x);
//std::cout<<y<<"*"<<2<<"^"<<x<<endl;
x++;
n /=10;
}

return ans;
}

int octalToDecimal(int n){
int ans = 0;
int x = 0;

while(n > 0){
int y = n%10;
ans += y*pow(8, x);
x++;
n /=10;
}

return ans;
}

int hexadecimalToDecimal(std::string no){
int ans = 0;
int x = 0;

int s = no.size();

for(int i = s-1; i >=0; i--){

if(no[i] > '0'  && no[i] <= '9'){

    ans +=  (no[i] - '0')*pow(16, x) ;
}
else if(no[i] >= 'A' && no[i] <= 'F'){
    ans += (no[i] - 'A' + 10)*pow(16, x);
}
x++;
}


return ans;
}


int main(){
system("CLS");
int n;
std::string no = "";
int o = 16;
cout<<"\v\v\t\t\t\t\t\tTo Decimal converter\n\n\n";
cout<<"\n\n\n<<Press Enter key to continue>>\n\n";
cin.ignore(numeric_limits<streamsize>::max(),'\n');

system("CLS");

cout<<"\nSelect the number system 2 or 8 or 16: ";
cin>>o;
cin.ignore(numeric_limits<streamsize>::max(),'\n');


switch(o){
    case 2:
           cout<<"\nEnter the Binary number: ";
            cin>>n;
            cout<<"\nCorresponding Decimal Value: "<<binaryToDecimal(n)<<"\n";
            break;
    case 8:
            cout<<"\nEnter the Octal number: ";
            cin>>n;
            cout<<"\nCorresponding Decimal Value: "<<octalToDecimal(n)<<"\n";
           break;
    case 16:
            cout<<"\nEnter the Hex Number: ";
            getline(cin, no);
            cout<<"\nCorresponding Decimal Value: "<<hexadecimalToDecimal(no)<<"\n";
           break;

    default: {
        system("CLS");
        cerr<<"Bad Input";
        exit(0);
    }
}




return 0;
}

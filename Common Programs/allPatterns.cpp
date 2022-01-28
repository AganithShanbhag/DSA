#include<iostream>
using namespace std;

int main(){

    cout<<"Pattern 1 - Rectangle"<<endl;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 4; j++)
           cout<<"* ";
        cout<<endl;
    }

    cout<<"Pattern 2- Hollow Rectangle"<<endl;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(i == 0 || i == (5-1) || j == (0) || j == (5-1)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    cout<<"Pattern 3- Inverted Half Pyramid"<<endl;
    for(int j = 5; j > 0; j--){
        for(int k = 0; k < j; k++){
            cout<<"*";
        }
        cout<<endl;
    }


    cout<<"Pattern 5 - Half patter - Right half of Triangle"<<endl;
    for(int k = 0; k < 6; k++){
        for(int j = 0 ; j < k ; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<"Pattern 6 - Left Half Triangle"<<endl;
    for(int k = 0; k < 6; k++){
        for(int j = 0 ; j < 6 ; j++){
            if(j <= 6-k)cout<<" ";
            else
               cout<<"*";
        }
        cout<<endl;
    }

    cout<<"Pattern 7- Right Half Pyramid with numbers"<<endl;
    for(int m = 1; m <=5; m++){
        for(int j = 1; j <=m; j++){
            cout<<m<<" ";
        }
        cout<<"\n";
    }

    cout<<"Pattern 8- Flyod's Triangle"<<endl;
    int count = 1;
    for(int m = 0; m < 5; m++){
        for(int j = 0; j <= m; j++){
            cout<<count++<<" ";
        }
        cout<<endl;
    }

    cout<<"Pattern 9- Butterfly\n";

    for(int i = 1; i <= 4; i++){
        for(int j = 1; j <= i; j++){
            cout<<"*";
        }
        for(int j = 1; j <= 8-(2*i); j++){
            cout<<" ";
        }
        
        for(int j = 1; j <= i; j++){
            cout<<"*";
        }

        cout<<endl;
    }
    for(int i = 1; i <= 4; i++){
        for(int j = 1; j <= 4-(i -1); j++){
            cout<<"*";
        }
        for(int j = 1; j <= (2*(i-1)); j++){
            cout<<" ";
        }
        
        for(int j = 0; j < 4-(i-1); j++){
            cout<<"*";
        }

        cout<<endl;
    }


    cout<<"Pattern 10- Butterfly Better approach"<<endl;
    for(int i = 1; i <= 4; i++){
        for(int j = 1; j <= i; j++){
            cout<<"*";
        }
        for(int j = 1; j <= (2*4 - 2*i); j++){
            cout<<" ";
        }
        for(int j = 1; j <= i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i = 4; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout<<"*";
        }
        for(int j = 1; j <= (2*4 - 2*i); j++){
            cout<<" ";
        }
        for(int j = 1; j <= i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<"Pattern 11- Inverted Pattern"<<endl;
    for(int i = 5; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<"Pattern 12 -  0-1 Pattern"<<endl;
    int toggle = 0;

    for(int row = 1 ; row <=5 ; row++){
        for(int col = 1; col <= row; col++){
            toggle = !toggle;
            cout<<toggle<<" ";

        }
        cout<<endl;
    }

    cout<<"Pattern 13 - Rhombus"<<endl;

    for(int i = 1 ; i <= 8; i++){
       for(int j = 1; j <= (8-i); j++){
           cout<<" ";
       }

        for(int j = 1; j <= 8; j++){
           cout<<"*";
       }

       cout<<endl;
    }

    cout<<"Pattern 13 - Number Pattern"<<endl;
    for(int i = 1; i <= 5; i++){
        for(int j = 0; j <= 5-i; j++){
            cout<<" ";
        }
        for(int j = 1; j <= i; j++){
            cout<<" "<<j;
        }

        cout<<endl<<endl;
    }

    cout<<"Pattern 14 - Palindromic Pattern"<<endl;
    for(int i = 1; i <= 5; i++){
        int j;
        for( j = 1; j <= 5-i; j++){
            cout<<" ";
        }
        int k = i;
        for(; j<=5; j++){
            cout<<k--<<" ";
        }
        k = 2;
        for(; j <= 5+i-1; j++){
            cout<<k++<<" ";
        }

        cout<<endl;
    }

    cout<<"Pattern 15 - Star Pattern"<<endl;
    int  n = 8;
    for(int i = 1; i <= n/2; i++){

        for(int j = 1; j <= n/2 - i ; j++){
            cout<<" ";
        }

        for(int j = 1; j <= (2*i - 1); j++){
            cout<<"*"; 
        }

        cout<<endl<<endl;

    }
    for(int i = n/2; i >= 1; i--){

        for(int j = 1; j <= n/2 - i ; j++){
            cout<<" ";
        }

        for(int j = 1; j <= (2*i - 1); j++){
            cout<<"*"; 
        }

        cout<<endl;
        
    }

cout<<"Pattern 15 - Zig Zag Pattern"<<endl;
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 21 ; j++){
            
            if(((i+j)%4 == 0)|| ((i == 2) && (j%4 == 0))){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;

    }


    
return 0;
}




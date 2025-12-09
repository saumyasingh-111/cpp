#include<iostream>
using namespace std;

void pattern0(){/* star pattern
                  *
                  **
                  ***
                  ****
                */
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern1(){ /* inverted star pattern
                   ****
                   ***
                   **
                   *    
                 */
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern2(){/* half triangle pattern
                     *
                    **
                   ***
                  ****
                */
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern3(){/* triangle pattern 
                        *
                       ***
                      *****
                     *******
                */
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=2;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern4(){/* diamond pattern
                     *
                    ***
                   *****
                  *******
                  *******
                   *****
                    ***
                     *    
                */
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=2;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }


    for(int i=1;i<=n;i++){
        for(int j=2;j<=i;j++){
            cout<<" ";
        }
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern5(){/* floyd's triangle
                 1 
                 2 3 
                 4 5 6 
                 7 8 9 10 
                 11 12 13 14 15 
                */
    int n=5;
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}

void pattern6(){/*half number pyramid pattern
                  1 
                  1 2 
                  1 2 3 
                  1 2 3 4 
                */
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern7(){/*half character pyramid pattern
                  A 
                  B C 
                  D E F 
                  G H I J 
                */
    int n=4;
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}

void pattern8(){/*hollow rectangle
                  * * * * * * *
                  *           *
                  *           *
                  * * * * * * *
                */
    int n=4;
    for(int i=1;i<=n;i++){
        cout<<"*"<<" ";
        for(int j=1;j<=n+1;j++){
            if(i==1||i==n){
                cout<<"*"<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<"*"<<endl;
    }
}

void pattern9() {/*butterfly pattern
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *
    */
    int n = 4;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        for (int j = 1; j <= 2*(n-i); j++){
            cout << " ";
        }
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        for (int j = 1; j <= 2*(n-i); j++){
            cout << " ";
        }
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern10(){/*0-1 triangle pattern
1 
0 1 
0 1 0 
1 0 1 0 
1 0 1 0 1 
    */
    int n=5;
    bool num=true;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num=!num;
        }
        cout<<endl;
    }
}

void pattern11(){/*rhombus pattern
    * * * * * *
   * * * * * *
  * * * * * *
 * * * * * *
    */
    int n=5;
    for(int i=1;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        cout<<"* * * * * *";
        cout<<endl;
    }
}

void pattern12(){/*palindromic pattern
        1 
      2 1 2 
    3 2 1 2 3 
  4 3 2 1 2 3 4 
5 4 3 2 1 2 3 4 5 

    */
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        for(int j=2;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    pattern12();
    return 0;
}
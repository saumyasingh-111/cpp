#include<iostream>
using namespace std;

// spiral matrix
void spiralmatrix(int mat[][4],int n, int m){
    int srow=0,scol=0;
    int erow=n-1,ecol=m-1;

    while(srow<=erow&&scol<=ecol){
        for(int j=scol;j<=ecol;j++){
            cout<<mat[srow][j]<<" ";
        }
        for(int i=srow;i<=erow;i++){
            cout<<mat[i][ecol]<<" ";
        }
        for(int i=erow-1;i>=scol;i--){
            cout<<mat[erow][i]<<" ";
        }
        for(int i=erow-1;i=srow+1;i--){
            cout<<mat[i][scol]<<" ";
        }
        srow++;scol++;
        erow--;ecol--;
    }
    cout<<endl;
}

// diagonal sum
int diagonalsum(int mat[][4],int n){
    int sum=0;
    for(int i=0;i<n;i++){
    sum+=mat[i][i];
    if(i!=n-i-1){
        sum+=mat[i][n-i-1];
    }
  }
  cout<<sum<<endl;
  return sum;
}

// staircase search
bool search(int mat[][4],int n,int m,int key){
    int i=0,j=m-1;
    while(i<n&&j>=0){
        if(mat[i][j]==key){
            cout<<"found at cell("<<i<<j;
            return true;
        }else if(mat[i][j]>key){
            // left
            j--;
        }else{
            // down
            i++;
        }
    }
    cout<<"key not found";
    return false;
}

int main(){
    int matrix[4][4]={{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
    search(matrix,4,4,33);
    return 0;
}
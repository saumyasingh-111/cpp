#include<iostream>
using namespace std;

// to find product of 2 nums
int product(int a , int b){
    int product=a*b;
    return product;
}

// to print a num is odd or even
int fn(int num){
    if(num%2==0){
        cout<<"even";
    }else{
        cout<<"odd";
    }
}

// to print the factorial of a num
int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<fact;
}

// to print if a num is prime or not
bool prime(int n){
    for(int i=2;i<n-1;i++){
        if(n%i==0){
            cout<<false;
        }
    }
}

// binomial coeffecient
int bicoeff(int n,int r){
    int val1=fact(n);
    int val2=fact(r);
    int val3=fact(n-r);

    int result=val1/(val2*val3);
    return result;
}

// print all primes in a range from 2 to n
void allprime(int n){
    for(int i=2;i<=n-1;i++){
        if(prime(i)){
            cout<<i;
        }
    }
    cout<<endl;
}

// to check if a num is a palindrome 
int check(int n){
    int num=0;
    while(n>0){
        int last=n%10;
        num=num*10+last;
        n=n/10;
    }
    return num;
}

// to calculate the sum of digits
int sum(int n){
    int sum1=0;
    while(n>0){
        int last=n%10;
        sum1=sum1+last;
        n=n/10;
    }
    return sum1;
}

// to print the largest of 3num
int compare(int a,int b,int c){
    if(a>b&&a>c){
        return a;
    }else if(b>c){
        return b;
    }else{
        return c;
    }
}

// fn that accepts a char as param and returns char that occurs after ch in eng alphabet
char next(char ch){
    if(ch=='z'){
        return 'a';
    }else{
        return ch+1;
    }
}

int main(){
    
    return 0;
}
#include<iostream>
#include <climits>
using namespace std;

// find largest number in array
void findmax(int arr[],int n){
    int mx=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>mx){
            mx=arr[i];
        }
    }
    cout<<"max = "<<mx<<endl;
}


// linear search
int linearsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
        return -1;
    }
}

// reverse array
void reverse(int arr[],int n){
    int start=0, end=n-1;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;

        start++;
        end--;
    }
}

// binary search
int binarysearch(int arr[],int n,int key){
    int st=0,end=n-1;
    while(st<=end){
        int mid=(st+end)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]<key){
            st=mid+1;
        }else{
            end=mid-1;
        }
    }
    return -1;
}

// subarrays
void subarrays(int arr[],int n){
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            for(int i=start;i<=end;i++){
                cout<<arr[i];
            }
            cout<<", ";
        }
        cout<<endl;
    }
}

//kadane's algo
void maxsubarray(int arr[],int n){
    int maxsum=INT_MIN;
    int currsum=0;
    for(int i=0;i<n;i++){
    maxsum=max(currsum,maxsum);
    if(currsum<0){
        currsum=0;
    }
   }
   cout<<maxsum<<endl;
}

int main(){
    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(int);
}
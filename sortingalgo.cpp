#include <iostream>
using namespace std;
#include <climits>

//bubble sort
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        bool isSwap=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap=true;
            }
        }
       
    if(!isSwap){
    break;    
    }
}
       print(arr, n);
}

// selection sort
void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minidx=i;
        for(int j=i+1;i<n;j++){
            if(arr[j]<arr[minidx]){
                minidx=j;
            }
            swap(arr[j],arr[minidx]);

       print(arr, n);        }
    }
}

// counting sort
void countingsort(int arr[], int n){
    
    int minval = INT_MAX;
    int maxval = INT_MIN;

    for(int i=0; i<n; i++){
        minval = min(minval, arr[i]);
        maxval = max(maxval, arr[i]);
    }

    int range = maxval - minval + 1;
    int freq[10000] = {0}; 
    for(int i=0; i<n; i++){
        freq[arr[i]-minval]++;
    }

    int j = 0;
    for(int i=0; i<range; i++){
        while(freq[i] > 0){
            arr[j++] = i + minval;
            freq[i]--;
        }
    }

    print(arr, n);
}


int main(){
    int arr[5]={5,4,1,3,2};
    countingsort(arr,5);
    return 0;
}
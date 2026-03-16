#include<iostream>
using namespace std;

void reverseOfArr(int arr[],int sz){
    int start = 0,end = sz-1;
    
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[6] = {1,2,3,4,5,6};
    int sz = sizeof(arr)/sizeof(int);
    
    reverseOfArr(arr,sz);
    
    for(int x: arr){    //For-Each-Loop
        cout << x << " ";
    }
    
    return 0;
}

// 6 5 4 3 2 1

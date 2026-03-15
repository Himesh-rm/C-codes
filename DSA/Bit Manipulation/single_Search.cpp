// Search single number in given array. 

#include<iostream>
using namespace std;

int single(int arr[],int n){
    int xorsum = 0;
    for(int i=0;i<n;i++){
        xorsum = xorsum ^ arr[i];
    }
    return xorsum;
}

int main(){
    int arr[5] = {1,1,2,2,3};
    cout << single(arr,5);
    return 0;
}

// 3

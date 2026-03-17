// WAP to swap the max & min number of an array.

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    int smallest = INT_MAX;
    int greatest = INT_MIN;
    int x,y;
    
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        if(arr[i]<smallest){
            smallest = min(arr[i],smallest);
            x = i;
        }
        if(arr[i]>greatest){
          greatest = max(arr[i],greatest);
          y = i;
        } 
        
    }
        swap(arr[x],arr[y]);
   
    for(int H: arr){
        cout << H << " ";
    }
    
    return 0;
}

// 5 2 3 4 1

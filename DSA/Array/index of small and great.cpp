#include<iostream>
#include<climits>
using namespace std;

int main(){
    int marks[5] = {1,2,3,4,5};
    int smallest = INT_MAX;
    int greatest = INT_MIN;
    int x,y;
    
    for(int i=0;i<sizeof(marks)/sizeof(int);i++){
        if(marks[i]<smallest){
            smallest = marks[i];
            x = i;
        }  
        if(marks[i]>greatest){
            greatest = marks[i];
            y = i;   
        }
    }
    cout << "Index for smallest is: " << x << endl;
    cout << "Index for greatest is: " << y << endl;
    
    return 0;
}

// Index for smallest is: 0
// Index for greatest is: 4

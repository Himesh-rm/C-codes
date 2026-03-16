#include<iostream>
#include<climits>
using namespace std;

int main(){
    int marks[5] = {1,2,3,4,5};
    int smallest = INT_MAX;
    int greatest = INT_MIN;
    
    for(int i=0;i<sizeof(marks)/sizeof(int);i++){
        smallest = min(marks[i],smallest);  
        greatest = max(marks[i],greatest);
    }
    cout << smallest << endl << greatest;
    return 0;
}

// 1
// 5

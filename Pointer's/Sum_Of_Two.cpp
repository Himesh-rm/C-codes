#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int b = 10;
    
    int* p1 = &a;
    int* p2 = &b;
    
    cout << *p1+*p2; 
}

// 15

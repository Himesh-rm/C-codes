// Write a program to find Largest among two numbers using function template.

#include<iostream>
using namespace std;

template <typename T>
T largest(T &n1, T &n2){
    T b = (n1>n2) ? n1 : n2;
    return b;
}

int main(){
    
    int a = 10,b = 20;
    float c = 34.56, d = 45.89;
    
    cout << largest(a,b) << endl;
    cout << largest(c,d) << endl;
    
    return 0;
}

// 20
// 45.89

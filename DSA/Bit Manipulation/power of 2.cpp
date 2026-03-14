//Check a number is power of 2 or not.

#include<iostream>
using namespace std;

bool powerof2(int n){
    return (n && !(n & (n-1)));
}

int main(){
    cout << powerof2(10);
    return 0;
}

// 0

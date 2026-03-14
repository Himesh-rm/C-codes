//WAP to count the number os ones in binary representation of a number.

#include<iostream>
using namespace std;

int numberOfOnes(int n){
    int count = 0;
    while(n!=0){
        n = n & (n-1);
        count++;
    }
    return count++;
}

int main(){
    cout << "Number of ones is: " << numberOfOnes(5) << endl;
    return 0;
}

// Number of ones is: 2

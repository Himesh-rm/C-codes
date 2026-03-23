#include<iostream>
using namespace std;

int fibo(int n){
    if(n<2){
        return 1;
    }
    return fibo(n-2) + fibo(n-1);
}

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << "The term in Fibonacci sequance at " << num << " is: " << fibo(num) << endl;
    return 0;
}

/* 
Enter the number: 5
The term in Fibonacci sequance at 5 is: 8
*/

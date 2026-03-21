#include<iostream>
#include<algorithm>
using namespace std;

int GCD(int n1,int n2){
    return __gcd(n1,n2);
}

int main(){
    int n1,n2;
    cout << "Enter any two number: ";
    cin >> n1 >> n2;
    
    cout << "My GCD number is: " << GCD(n1,n2) << endl;
    
    return 0;
}

/*
Enter any two number: 12 15
My GCD number is: 3
*/

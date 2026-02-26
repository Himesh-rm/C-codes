// WAP to check the number is Odd or Even using decision making stastment.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    (n%2==0) ? cout << "The number is Even number." : cout << "The number is Odd number.";
    
    return 0;
}

/*
Enter a number: 9
The number is Odd number.
*/

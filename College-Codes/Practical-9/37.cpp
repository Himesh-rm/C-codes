// Write a program to build Simple calculator using Class template.

#include<iostream>
using namespace std;

template<class T>
T calculator(T n1, T n2){
    char sign;
    cout << "Enter a sign between(+,-,*,/): ";
    cin >> sign;

    if(sign == '+') return n1+n2;
    else if(sign == '-') return n1-n2;
    else if(sign == '*') return n1*n2;
    else if(sign == '/'){
        if(n2!=0) return n1/n2;
        else cout << "Division by zero is not allowed....";
    }
}

int main(){

    cout <<  calculator(10,20) << endl;
    cout << calculator(36.23,53.66) << endl;
    cout << calculator('Z','\0') << endl;

    return 0;
}

// Enter a sign between(+,-,*,/): *
// 200
// Enter a sign between(+,-,*,/): -
// -17.43
// Enter a sign between(+,-,*,/): /
// Division by zero is not allowed....

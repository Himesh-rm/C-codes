#include<iostream>
using namespace std;

int main(){
    float a,b;
    char ch;
    cout << "Enter any two number: ";
    cin >> a >> b;
    cout << "Enter sign(+,-,*,/,%): ";
    cin >> ch;
    
    if(ch=='+') cout << a+b;
    else if(ch=='-') cout << a-b;
    else if(ch=='*') cout << a*b;
    else if(ch=='%') cout << (int)a%(int)b;
    else {
        if(b!=0) cout << a/b;
        else cout << "Error! zero is not accepted.";
    }
    
    
    return 0;
}

/*
Enter any two number: 12 0
Enter sign(+,-,*,/): /
Error! zero is not accepted.
*/

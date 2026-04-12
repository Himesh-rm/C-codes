// Write a C++ Program to show access to Private Public and Protected using Inheritance.

#include<iostream>
using namespace std;

class A{
private:
    int a = 10;
public:
    int b = 20;
    void showa(){
        cout << "Value of A is: " << a << " using showa() function.\n" << endl;
    }
protected:
    int c = 30;
    
};

class B:public A{
public:
    B(){
        cout << "Inheritance in B class: " << b << " & " << c << endl;
        showa();
    }
};

class C : protected A{
public:
    C(){
        cout << "Inheritance in C class: " << b << " & " << c << endl;
        showa();
    }
};

class D:private A{
public:
    D(){
        cout << "Inheritance in D class: " << b << " & " << c << endl;
        showa();
    }
};
int main(){
    
    B obj1;
    C obj2;
    D obj3;
    
    return 0;
}

/*
Inheritance in B class: 20 & 30
Value of A is: 10 using showa() function.

Inheritance in C class: 20 & 30
Value of A is: 10 using showa() function.

Inheritance in D class: 20 & 30
Value of A is: 10 using showa() function.
*/

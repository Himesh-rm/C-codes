// [31] ----------> Write a C++ Program to demonstrate Run time Polymorphism.
// [32] ---------->  Write a C++ Program to illustrate the use of pure virtual function in Polymorphism.

#include<iostream>
using namespace std;

class A{
public:
    virtual void display() = 0;
};

class B:public A{
public:
    void display(){
        cout << "This is class B." << endl;
    }
};

int main(){
      
    A *Himesh;
    B Jenil;
    
    Himesh = &Jenil;
    Himesh->display();
        
    return 0;
}

// This is class B.

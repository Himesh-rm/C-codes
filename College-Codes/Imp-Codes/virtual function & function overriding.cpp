#include<iostream>
using namespace std;

class A{
public:
    virtual void display(){
        cout << "THIS IS CLASS A." << endl;
    }
};

class B:public A{
public:
     void display() override{ 
        cout << "THIS IS CLASS B." << endl;
    }
};

class C:public A{
public:
     void display() override{
        cout << "THIS IS CLASS C." << endl;
    }
};

int main(){
    A *Himesh;
    B Rudra;
    C Jenil;
    
    Himesh = &Rudra;
    Himesh->display();
    
    Himesh = &Jenil;
    Himesh->display();
    
    return 0;
}

/*
THIS IS CLASS B.
THIS IS CLASS C.
*/

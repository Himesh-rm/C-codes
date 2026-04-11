#include<iostream>
using namespace std;

class A{
public:
    int x;
    void getx(){
        cout << "Enter a value of x: ";
        cin >> x;
    }
};

class B:public A{
public:
    int y;
    void gety(){
        cout << "Enter a value of y: ";
        cin >> y;
    }
};

class C{
public:
    int z;
    void getz(){
        cout << "Enter a value of z: ";
        cin >> z;
    }
};

class D:public B,public C{
public:
    void product(){
        cout << "Product = " << x*y*z << endl;
    }
};

int main(){
    
    D obj;
    obj.getx();
    obj.gety();
    obj.getz();
    obj.product();
    
    return 0;
}

/*
Enter a value of x: 10
Enter a value of y: 20
Enter a value of z: 30
Product = 6000
*/

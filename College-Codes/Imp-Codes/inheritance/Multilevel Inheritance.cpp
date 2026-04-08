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

class C:public B{
public:
    void sum(){
        cout << "sum of x and y is: " << x+y << endl;
    }
    
    void product(){
        cout << "Product of x and y is: " << x*y << endl;
    }
};

int main(){
    
    C s1;
    s1.getx();
    s1.gety();
    s1.sum();
    s1.product();
    
    return 0;
}

/*
Enter a value of x: 100
Enter a value of y: 200
sum of x and y is: 300
Product of x and y is: 20000
*/

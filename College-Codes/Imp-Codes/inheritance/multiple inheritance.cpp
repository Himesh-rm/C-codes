#include<iostream>
using namespace std;

class A{
public:
    int x;
    void getx(){
        cout << "Enter a value for x: ";
        cin >> x;
    }
};

class B{
public:
    int y;
    void gety(){
        cout << "Enter a value for y: ";
        cin >> y;
    }
};

class C:public A,public B{
public:
    void sum(){
        cout << "Sum of x and y is: " << x+y << endl;
    }
    
    void product(){
        cout << "Product of x and y is: " << x*y << endl;
    }
};

int main(){
    
    C call;
    call.getx();
    call.gety();
    call.sum();
    call.product();
    
    return 0;
}

/*

Enter a value for x: 100
Enter a value for y: 200
Sum of x and y is: 300
Product of x and y is: 20000

*/

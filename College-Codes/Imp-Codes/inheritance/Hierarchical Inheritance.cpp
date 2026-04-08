#include<iostream>
using namespace std;

class A{
public:
    int x,y;
    void getdata(){
        cout << "Enter a value of x and y: ";
        cin >> x >> y;
    }
};

class B:public A{
public:
    void sum(){
    cout << "Sum of x and y is: " << x+y << "\n\n";
    }
};

class C:public A{
public:
    void product(){
        cout << "Product of x and y is: " << x*y << endl;
    }
};

int main(){
      B num1;
      num1.getdata();
      num1.sum();
      
      C num2;
      num2.getdata();
      num2.product();
    
    return 0;
}

/*
Enter a value of x and y: 100 200
Sum of x and y is: 300

Enter a value of x and y: 150 300
Product of x and y is: 45000
*/

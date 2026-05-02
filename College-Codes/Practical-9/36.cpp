// Write a program to Swap data using function template

#include<iostream>
using namespace std;

template <typename T>
void swapp(T &n1,T &n2){
   T temp = n1;
   n1 = n2;
   n2 = temp;
}

int main(){
    
    int a = 10, b = 20;
    int c = 23.45, d = 45.67;
    
    swapp(a,b);
    cout << "a = " << a << " b = " << b << endl;
    
    swapp(c,d);
    cout << "c = " << c << " d = " << d << endl;
    
    return 0;
}

// a = 20 b = 10
// c = 45 d = 23

//Write a program to add complex numbers using friend function.

#include<iostream>
#include<cmath>
using namespace std;

class complex{
    int real;
    int image;

    public:
    complex(){
        real = 35;
        image = 36;
    }
    complex(int r,int i){
        real = r;
        image = i;
    }
    friend void himesh(complex,complex);
};

void himesh(complex r1,complex r2){
    complex r3;
    cout << "Addition of complex number is: ";
    
    r3.real = r1.real+r2.real;
    r3.image = r1.image+r2.image;

   if(r3.image >= 0) cout << r3.real << "+" << r3.image << "i" << endl;
   else cout << r3.real << "-" << abs(r3.image) << "i" << endl;
}

int main(){
    complex s1,s2(10,-200);
    himesh(s1,s2);

    return 0;
}

// Addition of complex number is: 45-164i

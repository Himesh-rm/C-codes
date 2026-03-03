//Write a program to add complex numbers using friend function.

#include<iostream>
using namespace std;

class complex{
    int real,image;
    public:

    complex(int r,int i){
        real = r;
        image = i;
    }

    friend void himesh(complex,complex);
};

void himesh(complex s1,complex s2){
    char ch;
    cout << "Addition of complex number is: ";
    int sum = s1.image+s2.image;
    if(sum >= 0){
        cout << s1.real+s2.real << " + " << s1.image+s2.image << "i" <<  endl;
    }
    else cout << s1.real+s2.real << s1.image+s2.image << "i" << endl;
}

int main(){
    complex r1(10,20),r2(30,-40);
    himesh(r1,r2);

    return 0;
}

// Addition of complex number is: 40-20i

// Addition of complex number is: 40-20i

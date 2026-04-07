#include<iostream>
using namespace std;

class complex{
  int real,image;
public:
    complex(){
        real = 10;
        image = 25;
    }
    
    friend complex operator+(complex,complex);
    
    void display(){
        cout << "My complex number is: " << real << " + " << image << "i" << endl;
    }
};

complex operator+(complex s1,complex s2){
    complex s3;
    s3.real = s1.real + s2.real;
    s3.image = s1.image + s2.image;
    return s3;
}

int main(){
    complex s1,s2,s3;
    s3 = s1 + s2;
    s3.display();
    
    return 0;
}

// My complex number is: 20 + 50i

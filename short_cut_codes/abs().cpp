//Complex number.

#include<iostream>
#include<cmath>
using namespace std;

class complex{
  int real=0,image=0;

  public:
  complex(){
      real = 10;
      image = 20;
      display();
  }
  complex(int real,int image){
      this->real = real;
      this->image = image;
      display();
  }
  void display(){
      char ch;
      if(image >=0) ch = '+';
      else ch = '-';
      cout << real << ch << abs(image) << "i" <<  endl;              //abs function.
  }
}s1,s2(100,-96);

int main(){return 0;}

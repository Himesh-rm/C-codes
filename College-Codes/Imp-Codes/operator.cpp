#include<iostream>
using namespace std;

class distance1{
  int num1;
  int num2;
  
  public:
  distance1(){
      num1 = 10;
      num2 = 25;
  }

  distance1(int c,int m){
      num1 = c;
      num2 = m;
  }

  void show(){
      cout << "Num1 = " << num1 << "\nNum2 = " << num2;
  }

  distance1 operator+(distance1 b){
      distance1 c;
      c.num1 = num1 + b.num1;
      c.num2 = num2 + b.num2;
      return c;
  }
};

int main(){
    distance1 s1,s2(10,25),s3;
    s3 = s1 + s2;
    s3.show();
    return 0;
}

/*
Num1 = 20
Num2 = 50
*/

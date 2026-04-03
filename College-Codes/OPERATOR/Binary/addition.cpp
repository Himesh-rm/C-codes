#include<iostream>
using namespace std;

class abc{
  int m,n;
  
  public:
  abc(){
     m = 8;
     n = 9;
  }
  void display(){
      cout << "m: " << m << "\nn: " << n << endl;
  }
  abc operator+(const abc&b){
      abc c;
      c.m = m + b.m;
      c.n = n + b.n;
      return c;
  }
};

int main(){
    abc x,y,z;
    z = x + y;
    z.display();
    
    return 0;
}

/*
m: 16
n: 18
*/

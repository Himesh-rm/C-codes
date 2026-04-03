#include<iostream>
using namespace std;

class value{
  int m;
  public:
  
  value(){
      m = 10;
  }
  
  int display(){
      cout << "Value = " << m << endl;
      return m+10;
  }
};

int main(){
    
    value x;
    int z;
    z = x.display();
    cout << "Value of z is: " << z << endl;
    
    return 0;
}

// Value = 10
// Value of z is: 20

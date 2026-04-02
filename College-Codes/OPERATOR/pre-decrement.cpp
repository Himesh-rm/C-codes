#include<iostream>
using namespace std;

class abc{
  int m,n;
  
 public:
  abc(){
      m = 8;
      n = 9;
  }
  
  void operator --(){
      --m;
      --n;
  }
  
  void show(){
      cout << "m: " << m << "\nn: " << n << endl;
  }
};

int main(){
    abc x;
    x.show();
    --x;
    x.show();
    
    return 0;
}

/*
m: 8
n: 9
m: 7
n: 8
*/

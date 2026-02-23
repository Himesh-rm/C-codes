// Sum of Two Numbers

#include<iostream>
using namespace std;

class jenil;
class rudra{
  int a = 10;
  friend void himesh(rudra,jenil);
};
class jenil{
  int b = 90;
  friend void himesh(rudra,jenil);
};
void himesh(rudra r1,jenil r2){
    cout << "Sum of two number is: " << r1.a+r2.b << endl;
}

int main(){
    rudra s1;
    jenil s2;
    himesh(s1,s2);
    
    
    return 0;
}

/*
Sum of two number is: 100
*/

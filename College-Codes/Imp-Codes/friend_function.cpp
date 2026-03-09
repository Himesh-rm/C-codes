#include<iostream>
using namespace std;

class himesh;
class jenil;
class rudra{
  int money = 10;
  friend void himesh(rudra,jenil);
};

class jenil{
  int money = 20;
  friend void himesh(rudra,jenil);
};

void himesh(rudra r1,jenil r2){
    cout << "Sum:- " << r1.money+r2.money << endl;
}
int main(){
    rudra obj1;
    jenil obj2;
    
    himesh(obj1,obj2);
    
    return 0;
}

// Sum:- 30

#include<iostream>
using namespace std;

class Name{
  string name;  
  public:
  
  Name(string name){
      this->name = name;
  }
  
  void display(){
      cout << "Name = " << name << endl;
  }
};

int main(){
    
    string y = "Himesh Rupchandani.";
    Name x(y);
    x.display();
    
    return 0;
}

// Name = Himesh Rupchandani.

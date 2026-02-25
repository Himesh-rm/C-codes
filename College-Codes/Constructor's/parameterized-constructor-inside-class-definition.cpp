// parameterized Constructor Inside Class Definition
 
#include<iostream>
using namespace std;

class student{
  string name;
  int age;
  
  public: 
  // parameterized Constructor
  student(string n,int a){
      name = n;
      age = a;
  }
  
  void display(){    //Inside Class Definition.
      cout << "Name = " << name << endl;
      cout << "Age = " << age << endl;
  }
};

int main(){
    
    student s1("Rahul",17);
    s1.display();
    
    return 0;
}

/*
Name = Rahul
Age = 17
*/

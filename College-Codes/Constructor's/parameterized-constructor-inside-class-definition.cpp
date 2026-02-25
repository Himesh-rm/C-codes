// parameterized Constructor Inside Class Definition
 
#include<iostream>
using namespace std;

class student{
  string name;
  int age;
  
  public:
  student(string n,int a){
      name = n;
      age = a;
  }
  
  void display(){
      cout << "Name = " << name << endl;
      cout << "Age = " << age << endl;
  }
};

int main(){
    
    student s1("Vishal",17);
    s1.display();
    
    return 0;
}

/*
Name = Vishal
Age = 17
*/

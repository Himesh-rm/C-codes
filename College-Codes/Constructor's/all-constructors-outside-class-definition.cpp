// All Constructor Outside Class Definition.

#include<iostream>
using namespace std;

class student{
  string name;
  int age;
  
  public:
  void display();                 // Function declaration.
  
  student(){                      // Defualt constructor.
      name = "Himesh";
      age = 17;
      display();
  }
  
  student(string n,int a){        // Parameterise constructor.
      name = n;
      age = a;
      display();
  }
  
  student(const student &h){      // copy constructor.
      name = h.name;
      age = h.age;
      display();
  }
  
  
};

  void student::display(){      // Outside Class Definition.
      cout << "Name = " << name << endl;
      cout << "Age = " << age << endl << endl;
  }
  
int main(){
    
    student s1;
    student s2("Rupchandani",17);
    student s3(s2);
    
    return 0;
}

/*
Name = Himesh
Age = 17

Name = Rupchandani
Age = 17

Name = Rupchandani
Age = 17
*/

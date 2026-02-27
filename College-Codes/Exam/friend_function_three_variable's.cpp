// WAP to using friend function using three private members.

#include<iostream>
using namespace std;

class student{
  string name = "Himesh";
  int money = 90;
  int age = 17;
  
  friend void himesh(student);
};

void himesh(student r1){
    cout << "Name = " << r1.name << endl;
    cout << "Money = " << r1.money << endl;
    cout << "Age = " << r1.age << endl;
}

int main(){
    
   student s1;
   himesh(s1);
    
    return 0;
}

/*
Name = Himesh
Money = 90
Age = 17
*/

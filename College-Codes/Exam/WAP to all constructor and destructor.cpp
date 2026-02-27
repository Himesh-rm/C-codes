// WAP to all constructor and destructor.

#include<iostream>
using namespace std;

class student{
    string name;
    int age;
    
    public:
    student(){
        name = "Himesh";
        age = 17;
    }
    student(string name,int age){
        this->name = name;
        this->age = age;
    }
    student(const student &obj){
        name = obj.name;
        age = obj.age;
    }
    void display(){
    cout << "Name = " << name << endl;
    cout << "Age = " << age << endl << endl;
    }
    
~student(){
    cout << "This is working fine." << endl;
    }
};

int main(){
    student s1;
    s1.display();
    
    student s2("Vishal",20);
    s2.display();
    
    student s3(s1);
    s3.display();
    
    return 0;
}

/*
Name = Himesh
Age = 17

Name = Vishal
Age = 20

Name = Himesh
Age = 17

This is working fine.
This is working fine.
This is working fine.
*/

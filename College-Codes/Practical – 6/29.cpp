// Write a C++ Program for Enter Patient details using Inheritance.

#include<iostream>
using namespace std;

class A{
public:
    string name;
    int age;
};

class B:public A{
public:
    void getdata(){
        cout << "Enter name of patient: ";
        cin >> name;
        cout << "Enter Age of " << name << " :";
        cin >> age;
    }
    
    void display(){
        cout << "\nName of patient is: " << name << endl;
        cout << "Age of patient is: " << age << endl;
    }
};

int main(){
    
    B obj;
    obj.getdata();
    obj.display();
    
    
    return 0;
}

/*
Enter name of patient: Himesh
Enter Age of Himesh :18

Name of patient is: Himesh
Age of patient is: 18
*/

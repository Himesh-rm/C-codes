// Friend_function_addition

#include<iostream>
using namespace std;

class student{
  int a,b;
  public:
  friend void himesh(student);
};

void himesh(student add){
    cout << "Enter any two number's: ";
    cin >> add.a >> add.b;
    cout << "Addition of two number is: " << add.a+add.b << endl;
}

int main(){
    student s1;
    himesh(s1);
    
    
    return 0;
}

/*
Enter any two number's: 12 15
Addition of two number is: 27
*/

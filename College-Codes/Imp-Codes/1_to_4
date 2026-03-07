#include<iostream>
#define PERCENT(x) (x*100/500)
using namespace std;

class student{
  int rollNo;
  int marks;
  
  public:
  
  // Function Overloading
  void setMarks(int m);
  void setMarks(int m,int grace);
  
  // Friend Function
  friend void showResult(student);
  
  // Default Constructor
  student(){
      rollNo = 0;
      marks = 0;
  }
  
  // Parameterized Constructor
  student(int rollNo,int marks){
      this->rollNo = rollNo;
      this->marks = marks;
  }
  
  // Copy Constructor
  student(const student &obj){
      rollNo = obj.rollNo;
      marks = obj.marks;
  }
  
  // Inline Function
  inline void display(){
      cout << "Roll Number = " << rollNo << " Marks = " << marks << endl;
  }
  
  // Destructor
  ~student(){
      cout << "Student object Destroyed." << endl;
  }
  
};

// Function Overloading Definition
void student::setMarks(int m){
    marks = m;
}

void student::setMarks(int m,int grace){
    marks = m + grace;
}

// Friend Function
void showResult(student s){
    cout << "Roll No = " << s.rollNo << endl;
    cout << "Marks = " << s.marks << endl;
    cout << "Percentage = " << PERCENT(s.marks) << "%" << endl;
}

int main(){
    
    student s1;
    student s2(5,300);
    student s3(s2);
    
    s1.setMarks(250);
    s2.setMarks(280,20);
    
    s1.display();
    s2.display();
    s3.display();
    
    cout << endl;
    
    showResult(s1);
    showResult(s2);
    
    return 0;
}

/*
Roll Number = 0 Marks = 250
Roll Number = 5 Marks = 300
Roll Number = 5 Marks = 300

Roll No = 0
Marks = 250
Percentage = 50%
Student object Destroyed.
Roll No = 5
Marks = 300
Percentage = 60%
Student object Destroyed.
Student object Destroyed.
Student object Destroyed.
Student object Destroyed.
*/

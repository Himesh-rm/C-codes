// Default Constructor Outside Class Definition.cpp

#include<iostream>
using namespace std;

class company{
  string name;
  int profit;
  
  public: 
  void display();  //Function Declaration. 
  
  company(){       //Default Constructor.
      name = "Himesh";
      profit = 150000;
  }
};
  
  void company::display(){       //Outside Class Definition.
      cout << "Name = " << name << endl;
      cout << "Profit = " << profit << endl;
  }

int main(){
    company s1;
    s1.display();
    
    
    return 0;
}

/*
Name = Himesh
Profit = 150000
*/

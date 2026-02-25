// Default Constructor Inside Class Definition

#include<iostream>
using namespace std;

class company{
  string name;
  int profit;
  
  public:
  //Default Constructor.
  company(){
      name = "Himesh";
      profit = 150000;
  }
  
  void display(){       // Inside Class Definition.
      cout << "Name = " << name << endl;
      cout << "Profit = " << profit << endl;
  }
};

int main(){
    company s1;
    s1.display();
    
    
    return 0;
}

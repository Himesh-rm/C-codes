// Parameterized Constructor Inside Class Definition

#include<iostream>
using namespace std;

class product{
  string name;
  int price;
  
  public:
  void display(); //Function Declaration.
  
  product(string name,int price){   //parameterized Constructor.
      this->name = name;
      this->price = price;
  }
};

    void product::display(){   //Outside Class Definition.
        cout << "Name = " << name << endl;
        cout << "Price = " << price << endl;
    }

int main(){
    product s1("Charger",1000);
    s1.display();
    
    
    return 0;
}

/*
Name = Charger
Price = 1000
*/

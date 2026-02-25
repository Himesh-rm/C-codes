// All Constructors Inside Class Definition.

#include<iostream>
using namespace std;

class car{
  string brand;
  float price;
  
  public:
  car(){                            // Default constructor.
      brand = "Suzuki";
      price = 9.00;
  }
  
  car(string b,float p){            // Parameterice constructor.
      brand = b;
      price = p;
  }
  
  car(const car &obj){               // Copy constructor.
      brand = obj.brand;
      price = obj.price;
  }
  
  void display(){                    //Inside Class Definition.
      cout << "Brand = " << brand << endl;
      cout << "Price = " << price << endl << endl;
  }
};

int main(){
    
  car c1;
  c1.display();
  
  car c2("Hyundai",10.00);
  c2.display();
  
  car c3(c1);
  c3.display();
  
  car c4(c2);
  c4.display();
    
    return 0;
}

/*
Brand = Suzuki
Price = 9

Brand = Hyundai
Price = 10

Brand = Suzuki
Price = 9

Brand = Hyundai
Price = 10
*/

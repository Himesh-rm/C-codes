// All Constructors And Destructor Inside Class Definition.

 #include<iostream>
using namespace std;

class Laptop{
  string brand;
  int price;
    
    public:
    Laptop(){                           // Default constructor.
        brand = "Lenovo";
        price = 75000;
    }
    
    Laptop(string brand,int price){     // Parameterized constructor.
        this->brand = brand;
        this->price = price;
    }
    
    Laptop(const Laptop &obj){          // Copy constructor.
        brand = obj.brand;
        price = obj.price;
    }
    
    void display(){
        cout << "Brand = " << brand << endl;
        cout << "Price = " << price << "\n\n";
    }
    
    ~Laptop(){
        cout << "Destructor work: " << brand << endl;
    }
};

int main(){
    Laptop s1;
    s1.display();
    
    Laptop s2("HP",80000);
    s2.display();
    
    Laptop s3(s1);
    s3.display();
    
    Laptop s4(s2);
    s4.display();
    
    return 0;
}

/*
Brand = Lenovo
Price = 75000

Brand = HP
Price = 80000

Brand = Lenovo
Price = 75000

Brand = HP
Price = 80000

Destructor work: HP
Destructor work: Lenovo
Destructor work: HP
Destructor work: Lenovo
*/

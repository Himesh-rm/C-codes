#include<iostream>
using namespace std;

class sample{
    int qty,price;
public:
    sample(int qty){
        this->qty = qty;
    }
    
    void display(){
        cout << "Qty = " << qty << endl;
    }
};

int main(){
    sample x = 10;
    x.display();
    return 0;
}

// Qty = 10

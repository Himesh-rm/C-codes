#include<iostream>
using namespace std;

class sample{
    int qty;
public:
    sample(int qty){
        this->qty = qty;
    }
    
    operator int(){
        return qty;
    }
};

int main(){
    int num;
    sample x(50);
    num = x;
    
    cout << "value of num is: " << num << endl;
    
    return 0;
}

// value of num is: 50

#include<iostream>
using namespace std;

    class base{
public:
        int x;
        
        void valueOfX(){
            cout << "Enter a value of x: ";
            cin >> x;
        }
    };
    
    class drived:public base{
public:
        int y;
        void valueOfY(){
            cout << "Enter a value of y: ";
            cin >> y;
        }
        
        void product(){
            cout << "Product of x and y is: " << x*y << endl;
        }
    };

int main(){
    
    drived a;
    a.valueOfX();
    a.valueOfY();
    a.product();
    
    return 0;
}

/*

Enter a value of x: 10
Enter a value of y: 20
Product of x and y is: 200

*/

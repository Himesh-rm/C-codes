#include<iostream>
using namespace std;

int main(){
    float SI,P,R,T;
    cout << "Enter the values of P,R and T: ";
    cin >> P >> R >> T;
    
    SI = (P*R*T)/100;
    cout << "Our simple interest is: " << SI << endl;
    
    return 0;
}

/*
Enter the values of P,R and T: 12 45 5
Our simple interest is: 27
*/

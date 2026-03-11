#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float pi = 3.1415926535;
    double pi2 = 3.1415926535;
    
    cout << setprecision(10) << pi << endl;
    cout << setprecision(10) << pi2 << endl;
    
    return 0;
}

/*
3.141592741    // After 6-digit's decimal value is not as a input value.
3.141592654    // the value is same.
*/

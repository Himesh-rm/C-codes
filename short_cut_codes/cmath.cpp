#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double n = 3.5,m = -3.14;
    cout << round(n) << endl;   //if 0.34 -> 0 if 0.50 -> 1
    cout << ceil(n) << endl;    //Round to up
    cout << floor(n) << endl;   //Round to down
    cout << pow(2,3) << endl;
    cout << sqrt(9) << endl;
    cout << abs(m) << endl;
    cout << min(n,m) << endl;
    cout << max(n,m) << endl;
    cout << hypot(3,4) << endl;   // underoot(x^2+y^2)
    return 0;
}

/*
4
4
3
8
3
3.14
-3.14
3.5
5
  */

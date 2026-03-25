#include<iostream>
using namespace std;

int main(){
   int a,b;
   
   int* p1 = &a;
   int* p2 = &b;
   
   cout << "Enter the number's: ";
   cin >> *p1 >> *p2;
   
   cout << a + b << endl;
   cout << *p1 + *p2 << endl;
   cout << a + *p2;
}

/*
25
25
25
*/

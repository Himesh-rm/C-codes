// Write a program to find the greatest of 3 numbers.

#include<iostream>
using namespace std;

int main(){
    int num1,num2,num3;
    cout << "Enter the numbers: ";
    cin >> num1 >> num2 >> num3;
    
   int b = (num1>num2) ? ((num1>num3)?num1:num2) : ((num2>num3)?num2:num3);
   cout <<"Number " << b << " is greatest."<< endl;
    
    return 0;
}

/* 
Enter the numbers:  12 24 36
Number 36 is greatest.
  */

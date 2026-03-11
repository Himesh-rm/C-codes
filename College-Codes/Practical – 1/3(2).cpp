// Write a program to find the greatest of 3 numbers.

#include<iostream>
using namespace std;

int main(){
    int num1,num2,num3;
    cout << "Enter the numbers: ";
    cin >> num1 >> num2 >> num3;
    
   if(num1>=num2){
       if(num1>num3) cout << "number " << num1 << " is gretest.";
       else cout << "number " << num3 << " is gretest.";
   }
    else if(num2>=num1){
       if(num2>num3) cout << "number " << num2 << " is gretest.";
       else cout << "number " << num3 << " is gretest.";
   }
    
    
    return 0;
}
/*
Enter the numbers: 32 11 22
number 32 is gretest.
*/

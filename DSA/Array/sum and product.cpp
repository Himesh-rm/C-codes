// sum and product of all array.

#include<iostream>
using namespace std;

int main(){
   int sum = 0, product = 1;
   int arr[5] = {1,2,3,4,5};
   for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        sum += arr[i];
        product *= arr[i];
   }
   
   cout << "Sum of array is: " << sum << endl;
   cout << "Product of array is: " << product << endl;
    
    return 0;
}

/*
Sum of array is: 15
Product of array is: 120
*/

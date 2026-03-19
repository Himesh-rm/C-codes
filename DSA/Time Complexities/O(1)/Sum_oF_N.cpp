// O(1) -----> Constant (No Foe-Loop,recursion) Just Normal Task's

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter an number: ";
    cin >> n;
    
    int ans =  n*(n+1)/2;
    cout << "Sum of given natural Element is: "<< ans << endl;
    return 0;
}

/*
Enter an number: 5
Sum of given natural Element is: 15
*/

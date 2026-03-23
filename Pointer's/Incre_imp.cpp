#include<iostream>
using namespace std;

int main(){
    int x = 5;
    int* ptr = &x;
    
    cout << *ptr << endl; // address(Yani x) ki value.

    *ptr = *ptr + 1; //*ptr mere address ki value hai issliyai address ke value mai(Yani x mai) + 1 hoga.  (*ptr)++;
    cout << *ptr << endl;

    ptr = ptr + 1;     
    cout << ptr << endl; // Garbage value because ptr mai x ka address hai jo change ho gaa or new address banegaa. Uss new address mai koy bhi value hi nahi hogi to garbage value print ho-jayegi.
    
    
    return 0;
}

/*
5
0x7fffc5f06108
*/

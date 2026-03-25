#include<iostream>
using namespace std;

int main(){
    int x = 5;
    int* p = &x;    // (matlab mai-nai p ke andar x ka address store kar diya.)
    
    cout << &x << endl;
    cout << p << endl;
    cout << *p << endl; // (means mai-nai x ki value print ki.)
    cout << &p << endl; // (p ka address alag hoga.) 
    return 0;
}

/*
0x7ffe725eaf84
0x7ffe725eaf84
5
0x7fffe640a270
*/

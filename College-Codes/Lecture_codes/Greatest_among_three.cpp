// Greatest among the three.

#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout << "Enter the numbers: ";
    cin >> a >> b >> c;
    
    if(a==b && b==c) cout << "All are equal.";
    
    else {
        int d = (a>b) ? ((a>c)?a:c) : ((b>c)?b:c);
        cout << "Greatest among three is: " << d << endl;
    }
    
    return 0;
}

/*
Enter the numbers: 8 5 4
Greatest amoung three is: 8
*/

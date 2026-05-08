#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter a value of n: ";
    cin >> n;

    int sum = 0,lastdigit,copy;

    copy = n;

    while(n>0){
        lastdigit = n%10;
        sum = sum + (lastdigit*lastdigit*lastdigit);
        n /= 10;
    }

    if(copy==sum) cout << "The number is Armstrong number.";
    else cout << "The number is not a Armstrong number.";

    return 0;
}

// Enter a value of n: 152
// The number is not a Armstrong number.

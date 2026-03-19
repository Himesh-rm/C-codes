#include<iostream>
using namespace std;

int main(){
    int n,fact = 1;
    cout << "Enter an number: ";
    cin >> n;
    
    for(int i=1;i<=n;i++){      // Here we only use one loop that's why it's O(n).
        fact *= i;
    }
    cout << fact << endl;
    return 0;
}

// Enter an number: 5 
// 120

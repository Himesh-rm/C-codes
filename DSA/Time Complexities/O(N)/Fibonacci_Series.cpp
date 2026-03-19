#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter an number: ";
    cin >> n;
    
    int dp[n+1];
    dp[0] = 0;
    dp[1] = 1;
    
    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    
    for(int x: dp){
        cout << x << " ";
     }
    
    return 0;
}

// Enter an number: 5
// 0 1 1 2 3 5 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    
    for(int i=0;i<n;i++){
        int a = 1;
       for(int j=0;j<(n-i);j++){
           cout << (a+i) << " "; 
           
       }
       cout << endl;
    }
    return 0;
}

/* Enter the number: 4
1 1 1 1 
2 2 2 
3 3 
4   */

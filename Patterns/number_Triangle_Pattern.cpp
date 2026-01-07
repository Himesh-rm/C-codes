#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout << j+1;
        }
        cout << endl;
    }
    
    
    return 0;
}

/* Enter the number: 5
    1
    12
    123
    1234
    12345 */

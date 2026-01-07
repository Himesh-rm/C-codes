#include<iostream>
using namespace std;
int main(){
    int n,a=1;
    cout << "Enter the number: ";
    cin >> n;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout << a << " ";
        }
        a++;
        cout << endl;
    }
    return 0;
}

/* Enter the number: 4
1 
2 2 
3 3 3 
4 4 4 4     */

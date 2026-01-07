#include<iostream>
using namespace std;

int main(){
    int n,a=65;
    cout << "Enter the number: ";
    cin >> n;
    
   for(int i=0;i<n;i++){
       for(int j=0;j<i;j++){
           cout << " ";
       }
       for(int j=0;j<(n-i);j++){
           cout << char(a);
       }
       a++;
       cout << endl;
   }
    return 0;
}

/* Enter the number: 4
AAAA
 BBB
  CC
   D  */

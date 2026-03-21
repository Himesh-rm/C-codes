#include<iostream>
using namespace std;

int main(){
    string s = "12345";
    for(int i=5;i>=1;i--){
         cout << s.substr(0, i) << endl;
    }
    return 0;
}

/*
12345
1234
123
12
1
*/

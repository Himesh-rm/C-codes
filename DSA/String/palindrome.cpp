#include<iostream>
using namespace std;

int main(){
    string s = "madam";
    int left = 0;
    int right = s.length()-1;
    
    while(left<=right){
        if(s[left]!=s[right]){
            cout << "Not a palindrom number.";
            return 0;
        }
        left++;
        right--;
    }
    cout << "Palindrome number.";
    
    return 0;
}

// Palindrome number.

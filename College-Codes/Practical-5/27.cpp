// Write a program to calculate Volume of Box using Constructor.

#include<iostream>
using namespace std;

class volume{
    int l,w,h;
  
  public:
  volume(int l,int w, int h){
      cout << "My Volume of Box is: " << l*w*h << endl;
  }  
};

int main(){
    
    volume s1(1,2,3);
    volume s2(4,5,6);
    
    return 0;
}

/*
My Volume of Box is: 6
My Volume of Box is: 120
*/
// Write a program to find volume of cube, cylinder, sphere
// by function overloading.

//Note:- bool << char << int << float << double.

#include<iostream>
#define PI 3.141592
using namespace std;

double volume(int a){
    return a*a*a;
}
double volume(double r,double h){
    return PI*r*r*h;
}
double volume(double r){
    return (4.0/3)*PI*r*r*r;
}

int main(){
    
    cout << "Volume of Cube is: " << volume(8) << endl;
    cout << "Volume of Cylinder is: " << volume(5.0,6.0) << endl;
    cout << "Volume of Sphere is: " << volume(9.0) << endl;
    
    return 0;
}
/*
Volume of Cube is: 512
Volume of Cylinder is: 471.239
Volume of Sphere is: 3053.63
*/

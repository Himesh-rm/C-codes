// Area of circle,triangle,rectangle,sphere by using function overloading.

#include<iostream>
#define PI 3.141565
using namespace std;

double area(int r){
    return PI*r*r;
}
double area(int base,int height){
    return 0.5*base*height;
}
double area(double l,double b){
    return l*b;
}
double area(double r,int sphere){
    return 4*PI*r*r;
}

int main(){
    cout << "Circle = " << area(10) << endl;
    cout << "Triangle = " << area(10,5) << endl;
    cout << "Rectangle = " << area(20.10,30.20) << endl;
    cout << "Sphere = " << area(20.56,1) << endl;
    
    return 0;
}

/*
Circle = 314.156
Triangle = 25
Rectangle = 607.02
Sphere = 5311.93
*/

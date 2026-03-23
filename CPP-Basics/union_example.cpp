#include<iostream>
using namespace std;
int main(){
    typedef union price{
        int rice;
        int chipes;
        int coldrink;
    }pz;
    
    pz himesh;
    pz karan;
    
    himesh.rice = 55;
    himesh.chipes = 90; // Now the value is overwritten because of union behaviour.
    karan.coldrink = 20;
    
    cout << himesh.rice << endl;
    cout << himesh.chipes << endl;
    cout << karan.coldrink << endl;
    return 0;
}

/*  

90 ---> Here himesh.rice value is 90 not 55. 
90
20
    */

// size,push_back,pop_back,front,back,at.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {25,63,12,45,78};
    
    cout << "Before Push_back size of vector is: " << vec.size() << endl;
    
    vec.push_back(6);  // Add 6 to the given vector.
    cout << "After Push_back size of vector is: " << vec.size() << endl;
    
    vec.pop_back();   // Remove last index in given vector.
    
    cout << "First Element of vector is: " << vec.front() << endl;  // To print first index value of vector.
    
    cout << "Last Element of vector is: " << vec.back() << endl;  // To print last index value of vector.
    
    cout << "Printing value using 'at' function: " << vec.at(0) << endl;
    
        cout << "Printing Value's of vector using For-Each-Loop: " << endl;
    for(int x: vec){      // For-Each Loop.
        cout << x << " ";
    }
    
    cout << "\nCapacity of vector is: " << vec.capacity() << endl; 
    return 0;
}

/*
Before Push_back size of vector is: 5
After Push_back size of vector is: 6
First Element of vector is: 25
Last Element of vector is: 78
Printing value using 'at' function: 25
Printing Value's of vector using For-Each_Loop: 
25 63 12 45 78 
Capacity of vector is: 10
*/

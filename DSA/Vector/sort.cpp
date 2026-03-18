#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
      vector<int> vec;
      vec = {1,1,1,1,2,3,4,5,1,1,6,1};
    
      sort(vec.begin(), vec.end());
      
      for(int x: vec){
          cout << x << ",";
      }
    
    return 0;
}

// 1,1,1,1,1,1,1,2,3,4,5,6, 

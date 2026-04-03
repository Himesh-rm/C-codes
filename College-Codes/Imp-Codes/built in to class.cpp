#include<iostream>
using namespace std;

class Time{
  int hours,minutes;
  public:
  
  Time(int t){
      hours = t/60;
      minutes = t%60;
  }
  
  void display(){
      cout << hours << " Hour and " << minutes << " min." << endl;
  }
  
};

int main(){
    
    Time ok = 90;
    ok.display();
    
    return 0;
}

// 1 Hour and 30 min.

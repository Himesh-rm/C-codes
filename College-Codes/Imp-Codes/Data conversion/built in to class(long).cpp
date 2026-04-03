#include<iostream>
using namespace std;

class Time{
  public:
  int hours,minutes;
  
  Time(int t){
      hours = t/60;
      minutes = t%60;
  }
  
  void display(){
      cout << hours << " Hours and " << minutes << " Min." << endl;
  }
};

int main(){
    int x = 90;
    Time ok(x);
    ok.display();
    return 0;
}

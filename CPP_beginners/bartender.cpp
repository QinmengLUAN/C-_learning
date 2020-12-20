#include <iostream>
#include <cmath>

using namespace std;
int main(){
  int age;
  cout << "Welcome to the pub!" << endl;
  cout << "What is your age?" << endl;
  cin >> age;
  if(age > 18){
    cout << "Have a pint!" << endl;
  } else if(age ==18){
    cout << "Show me your ID and then have a pint!" << endl;
  } else{
    cout << "I'm calling the x." << endl;
  }
  cout << "Goodbye" << endl;
}

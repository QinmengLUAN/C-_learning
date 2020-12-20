#include <iostream>

using namespace std;
int main(){

  int x = 5;
  int *p;
  p = &x;
  cout << "Value of x is " << x << endl;
  cout << "Address of x is " << p << endl;
  cout << "Value of *p variable is " << *p << endl;

  return 0;
}

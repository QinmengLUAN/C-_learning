#include <iostream>
#include <cmath>

using namespace std;
int main(){
  int inp;
  double f;
  cout << "Enter a input number: " << endl;
  cin >> inp;
  while (inp != 1){
    if (inp%2 == 0){
      f = inp/2;
    } else if (inp%2 == 1){
      f = 3*inp +1;
    }
  }
  cout << "The result is: "  << f << endl;
  inp = f;
  return 0;
}

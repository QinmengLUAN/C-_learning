#include <iostream>
#include <string>
using namespace std;
int sign_function(int n){
  int sign;
  if(n>0){
    sign = 1;
  } else if(n == 0){
    sign = 0;
  } else {
    sign = -1;
  }
  return sign;
}

int abs_function(int n){
  int absolute_value;
  if(n<0){
    absolute_value = -n;
  }
  return absolute_value;
}

int main(){
  int n;
  n = -5;
  cout << "Absolute value of n is: " << abs_function(n) << endl;
  cout << "Sign of n is: " << sign_function(n) << endl;
  return 0;
}

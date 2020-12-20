#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;
int main(){
  int n = 10;
  int square_number[10];

  for(int i = 0; i<n; ++i){
    square_number[i] = pow(i,2);
  }

  for(int i = 0; i<n; ++i){
    cout << square_number[i] << endl;
  }
  return 0;
}

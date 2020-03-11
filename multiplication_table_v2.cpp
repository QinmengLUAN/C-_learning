#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;
int main(){
  int n = 10;
  int product[10][10];

  for(int i = 0; i<n; ++i){
    for(int j = 0; j<n; ++j){
      product[i][j] = i*j;
    }
  }
  ofstream myfile;
  myfile.open ("multi_numbers.txt");
  for(int i = 0; i<n; ++i){
    for(int j = 0; j<n; ++j){
    cout << product[i][j] << " ";
    myfile << product[i][j] << " ";
    }
    cout << endl;
    myfile << endl;
  }
  myfile.close();
  return 0;
}

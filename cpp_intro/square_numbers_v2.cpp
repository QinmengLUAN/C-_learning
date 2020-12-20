#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;
int main(){
    int n = 10;
    ofstream myfile;
    myfile.open ("square_number.txt");
    for(int i = 0; i<n; ++i){
      cout << pow(i,2) << endl;
      myfile << pow(i,2) << endl;
    }
    int j = 0;
    while(j < n){
      cout << pow(j,2) << endl;
      myfile << pow(j,2) << endl;
      ++j;
    }
    myfile.close();
    return 0;

}

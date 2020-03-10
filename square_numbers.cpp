#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int n = 10;
    for(int i = 0; i<n; ++i){
      cout << pow(i,2) << endl;
    }
    int j = 0;
    while(j < n){
      cout << pow(j,2) << endl;
      ++j;
    }
    return 0;
}

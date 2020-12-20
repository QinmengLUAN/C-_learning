#include <iostream>

using namespace std;
int main(){

  int primes[3] = {2,3,4};
  int *p;
  p = primes;
  for(int i=0; i<3;i++){
    cout << "Address of primes[" << i << "] is " << p << endl;
    cout << "Value of primes[" << i << "] is " << *p << endl;
    ++p;
  }
  cout << "Value of *(primes+2) is " << *(primes+2) << endl;



  return 0;
}

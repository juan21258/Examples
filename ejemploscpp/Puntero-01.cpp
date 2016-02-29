#include <iostream>

using namespace std;

int
main() {

  int a = 120;
  int *pA = &a;

  cout << *pA << endl;
  
  a += 2;
  
  cout << *pA << endl;
  
  *pA +=2;

  cout << *pA << endl;
  
  return 0;
}

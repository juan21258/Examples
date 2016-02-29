#include <iostream>

using namespace std;

int (*pf)(int);

typedef int (*PFunc)(int);
PFunc pfun;

int f(int a){

  a++;
  cout << a << endl;
}

int g(int a) {

  a--;
  cout << a << endl;
}

int
main() {

  pf = f;
  pf(10);

  //pfun = g;
  pfun(10);

  return 0;
}

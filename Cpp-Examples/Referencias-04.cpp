/*
 * fichero: Referencias-04.C
 * compilar: $ g++ -o Referencias-04 Referencias-04.C
 * ejecutar: $ ./Referencias-04
 */
#include <iostream>

using namespace std;

void
incrementar_(int p) {
  p++;
}

void
incrementar(int *p) {
  (*p)++;
  return;
}

void
incrementar(int& p) {
  p++;
  return;
}

int
main() {
  int x = 10;
  
  cout << "x: " << x << endl;

  incrementar_(x);

  cout << "x: " << x << endl;

  incrementar(&x);

  cout << "x: " << x << endl;

  incrementar(x);

  cout << "x: " << x << endl;

  return 0;
}

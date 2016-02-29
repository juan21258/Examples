/*
 * fichero: Referencias-05.C
 * compilar: $ g++ -o Referencias-05 Referencias-05.C
 * ejecutar: $ ./Referencias-05
 */
#include <iostream>

using namespace std;

void
intercambio(int x, int y) {
  int tmp = x;
  x = y;
  y = tmp;
}

void
intercambio2(int* x, int* y) {
  int tmp = *x;
  *x = *y;
  *y = tmp;
}

void
intercambio2(int& x, int& y) {
  int tmp = x;
  x = y;
  y = tmp;
}

int
main() {
  int a = 10;
  int b = 20;
  
  cout << "a: " << a << endl;
  cout << "b: " << b << endl;

  intercambio(a,b);

  cout << "a: " << a << endl;
  cout << "b: " << b << endl;

  intercambio2(&a,&b);

  cout << "a: " << a << endl;
  cout << "b: " << b << endl;

  
  intercambio2(a,b);

  cout << "a: " << a << endl;
  cout << "b: " << b << endl;

  return 0;
}

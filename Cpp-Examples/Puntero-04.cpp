// fichero: Puntero-03.C
// compilar: $ g++ -o Puntero-03 Puntero-03.C
// ejecutar: $ ./Puntero-03
#include <iostream>

using namespace std;

int* f() {
  int valor = 10;
  return &valor;
}

int h(int a) {
  int b = a + 20;
  int c = c + 40;
  b += c;
  c += a;
  return a + b + c;
}

int
main() {

  int *pA = f();

  cout << *pA << endl;

  *pA += 2;

  cout << *pA << endl;

  h(*pA);

  cout << *pA << endl;

  return 0;
}

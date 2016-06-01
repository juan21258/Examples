// fichero: Arreglo-Puntero-01.C
//
// compilar: $ g++ -o Arreglo-Puntero-01 Arreglo-Puntero-01.C
// ejecutar: $ ./Arreglo-Puntero-01
// proposito: Mostrar la relación entre punteros y arreglos
#include <iostream>

using namespace std;

int
main() {

  typedef int* Pint;
  int a[] = { 1, 2, 3, 4 };
  Pint pa1 = a;
  Pint pa2 = &a[0];
  Pint pa3 = &a[3];

  cout << "a:   " << a   << endl;
  cout << "pa1: " << pa1 << endl;
  cout << "pa2: " << pa2 << endl;
  cout << "pa3: " << pa3 << endl;

  cout << "valor pa1: " << *pa1 << endl;
  cout << "valor pa2: " << *pa2 << endl;
  cout << "valor pa3: " << *pa3 << endl;

  return 0;
}

// fichero: Puntero-03.C
// compilar: $ g++ -o Puntero-03 Puntero-03.C
// ejecutar: $ ./Puntero-03
#include <iostream>

using namespace std;

int
main() {

  int *pA = new int;

  *pA = 120;

  cout << *pA << endl;

  *pA += 2;

  cout << *pA << endl;

  delete pA;

  *pA += 2;

  cout << *pA << endl;

  return 0;
}

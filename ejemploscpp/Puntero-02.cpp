// fichero: Puntero-02.C
// compilar: $ g++ -o Puntero-02 Puntero-02.C
// ejecutar: $ ./Puntero-02
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

  return 0;
}

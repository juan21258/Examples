/*
 * fichero: Constante-01-a.C
 * compilar: $ g++ -o Constante-01-a Constante-01-a.C
 * ejecutar. $ ./Constante-01-a
 */
#include <iostream>

using namespace std;

const char x = 'x';
const char w = x - 1;

int
main() {
  cout << "x: " << x << endl;
  cout << "w: " << w << endl;
  return 0;
}

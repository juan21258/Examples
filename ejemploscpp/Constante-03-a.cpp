/* fichero: Constante-03-a.C
 *
 * compilar: $ g++ -o Constante-03-a Constante-03-a.C
 * ejecutar: No compila
 * propósito: 
 */
#include <iostream>

using namespace std;

const int c1 = 10;
const int c2 = 20;
const int*  const pc1 = &c1;

int
main() {
  cout << c1 << endl;
  cout << *pc1 << endl;

  pc1 = &c2;
  cout << c2 << endl;
  cout << *pc1 << endl;
  return 0;
}

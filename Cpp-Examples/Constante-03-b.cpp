/* fichero: Constante-03-b.C
 *
 * compilar: $ g++ -o Constante-03-b Constante-03-b.C
 * ejecutar: $ ./Constante-03-b
 * propósito: 
 */
#include <iostream>

using namespace std;

int c1 = 10;
int c2 = 20;
int*  const pc1 = &c1;

int
main() {
  cout << c1 << endl;
  cout << c2 << endl;
  cout << *pc1 << endl;

  *pc1 = *pc1 + 3;
 
  cout << *pc1 << endl;
  return 0;
}

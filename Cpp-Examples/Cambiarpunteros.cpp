/* fichero: CambiarPunteros.C
 *
 * compilar: $ g++ -o CambiarPunteros CambiarPunteros.C
 * ejecutar: $ ./CambiarPuenteros
 * propósito: Mostrar como el compilador controla
 */
#include <iostream>

using namespace std;

void
f(int** p) {
  int * tmp = new int[10];

  for (int i = 0; i < 10; i++) tmp[i] = i;

  *p = tmp;
}

int
main() {
  int *a = new int;
  *a = 40;

  f(&a);

  cout << "a: " << *a << endl;
  return 0;

}

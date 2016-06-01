/* fichero: Constante-01.C
 *
 * compilar: $ g++ -o Constante-01 Constante-01.C
 * nota: compila con errores
 * propósito: Mostrar como el compilador controla
 */
#include <iostream>

void
f(const int* p) {
  p = new int[10];
  cout << p[4] << endl


}

int
main() {
  int a;
  a = 40;

  f(&a);

  return 0;

}

/* fichero: Literal-Cadena-02.C
 * compilar: g++ -o Literal-Cadena-02 Literal-Cadena-02.C
 * ejecutar. ./Literal-Cadena-02
 */
#include <iostream>

using namespace std;

void f() {
  char  p[] = "documento";
  p[0] = 'D';
  cout << p << endl;
}

int
main() {
  f();

  return 0;
}

/* fichero: Literal-Cadena-01.C
 * compilar: g++ -o Literal-Cadena-01 Literal-Cadena-01.C
 * ejecutar. ./Literal-Cadena-01
 */
#include <iostream>

using namespace std;

void f() {
  const char* p = "documento";
  p[0] = 'D';
  cout << p << endl;
}

int
main() {
  f();

  return 0;
}

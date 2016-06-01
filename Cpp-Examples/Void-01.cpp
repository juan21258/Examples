/*
 * ficheros: Void-01.C
 * compilar: $ g++ -o Void-01 Void-01.C
 * nota: No compila
 * proposito: Mostrar el uso de las referencias
 */
#include <iostream>

using namespace std;

int
main() {
  int   i  = 10;
  int*  p  = &i;
  void* pv = p;
  char* pp = (char*) pv;
  cout << pp[0] << endl;
  cout << pp[1] << endl;
  cout << pp[2] << endl;
  cout << pp[3] << endl;
  return 0;
}

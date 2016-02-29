/*
 * ficheros: Referencias-02.C
 * compilar: $ g++ -o Referencias-02 Referencias-02.C
 * proposito: Mostrar la inicializacion de las referencias 
 */
#include <iostream>

using namespace std;

int
main() {
  int i = 1;
  int& r1 = i;
  extern int& r2; // Ok definida en otra parte 
  //int& r3;        // Error: no inicializada

  cout << r1 << endl;
  cout << r2 << endl;
  return 0;
}

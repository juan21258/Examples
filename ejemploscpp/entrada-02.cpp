/*
 * fichero: Entrada-02.C
 * compilar: $ g++ -o Entrada-02 Entrada-02.C
 * ejecutar: $ ./Entrada-02
 * proposito: Mostrar como se leen datos de la entrada estandar.
 */
#include <iostream>

using namespace std;

int 
main() {
  int unEntero;
  double unDouble;
  long unLong;

  cout << "Entre un entero, un doble y un entero largo, separado de espacios: ";
  cin >> unEntero >> unDouble >> unLong;

  cout << "\n\nEntero:\t" << unEntero << endl;
  cout << "Doble:\t" << unDouble << endl;
  cout << "Entero largo:\t" << unLong << endl;

  return 0;
}

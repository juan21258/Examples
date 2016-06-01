/*
 * fichero: Entrada-01.C
 * compilar: $ g++ -o Entrada-01 Entrada-01.C
 * ejecutar: $ ./Entrada-01
 * proposito: Mostrar como se leen datos de la entrada estandar.
 */
#include <iostream>

using namespace std;

int 
main() {
  int unEntero;
  long unLong;
  double unDouble;
  float unFloat;
  unsigned short unEnteroCorto;

  cout << "int: ";
  cin >> unEntero;
  cout << "long: ";
  cin >> unLong;
  cout << "doble: ";
  cin >> unDouble;
  cout << "float: ";
  cin >> unFloat;
  cout << "entero corto sin signo: ";
  cin >> unEnteroCorto;

  cout << "\n\nEntero:\t" << unEntero << endl;
  cout << "Entero largo:\t" << unLong << endl;
  cout << "Doble:\t" << unDouble << endl;
  cout << "Flotante:\t" << unFloat << endl;
  cout << "Entero corto sin signo:\t" << unEnteroCorto << endl;
  return 0;
}

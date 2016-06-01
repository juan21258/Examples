// fichero: Arreglo-Puntero-03.C
//
// compilar: $ g++ -o Arreglo-Puntero-03 Arreglo-Puntero-03.C
// ejecutar: $ ./Arreglo-Puntero-03
// proposito: Mostrar la relación entre punteros y arreglos.
//            Diferentes formas de recorrer un arreglo.
#include <iostream>

using namespace std;

int
main() {

  typedef int* PInt;
  int a[] = { 1, 2, 3, 4 };
 
  // Recorrido del arreglo 
  for (int i = 0; i < sizeof(a) / sizeof(int); i++) {
    cout << "a[" << i << "]=" << a[i] << endl;
  }

  // Recorrido utilizando punteros
  PInt pa = a;
  for (int i = 0; i < sizeof(a) / sizeof(int); i++) {
    cout << "*(pa + " << i << ") = " << *(pa + i) << endl;
  }

  // Recorrido utilizando el arreglo como un puntero
  for (int i = 0; i < sizeof(a) / sizeof(int); i++) {
    cout << "*(a + " << i << ") = " << *(a + i) << endl;
  }
  
  pa = a;
  for (int i = 0; i < sizeof(a) / sizeof(int); i++) {
    cout << "pa[" << i << "]=" << pa[i] << endl;
  }

  //a++;
  //cout << "a: " << *a << endl;
  return 0;
}

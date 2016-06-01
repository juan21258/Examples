// fichero: Arreglo-Puntero-02.C
//
// compilar: $ g++ -o Arreglo-Puntero-02 Arreglo-Puntero-02.C
// ejecutar: $ ./Arreglo-Puntero-02
// proposito: Mostrar como iterar utilizando punteros
#include <iostream>

using namespace std;

int
main() {

  typedef int* PInt;
  int a[] = { 1, 2, 3, 4 };
  PInt posterior = &a[4];

  for (PInt i = a; i != posterior; i++) {
    cout << "posicion: " << i
	 << " valor: "   << *i << endl;
  }

  return 0;
}

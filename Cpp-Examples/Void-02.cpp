/*
 * ficheros: Void-02.C
 * compilar: $ g++ -o Void-02 Void-02.C
 * ejecutar: $ ./Void-02
 * proposito: Mostrar el uso de las referencias
 */
#include <iostream>

using namespace std;

int
main() {
  int   i  = 10;
  int*  p  = &i;
  void* pv = p;
  
  int* pi2 = static_cast<int*> (pv);

  cout << "i: " << i << endl;
  cout << "p: " << p << endl;
  cout << "*p: " << *p << endl;
  cout << "pv: " << pv << endl;

  double* pd1 = static_cast<double*>(pv); 

  
  cout << "*p:  " << *p << endl;
  cout << "pd1:"  << pd1 << endl;
  cout << "*pd1: " << *pd1 << endl;

  return 0;
}

//    Scope-01.C
// compilar: g++ -o Scope-01 Scope-01.C
//           make Scope-01

#include <iostream>

using namespace std;

int a = 21;

void h1() {
  int a;
  a = 20;

  cout << "Valor de a: " << a
       << " dentro de h1(), antes de bloque interno" << endl;
  {
    int a;

    a = 10;

    cout << "Valor de a: " << a
	 << " dentro de h1(), en el bloque interno" << endl;

  }

  a = 30;
  cout << "Valor de a: " << a
       << " dentro de h1() despues de bloque interno" << endl;
}

int *pA = &a;

void h2() {
  int a= 20;

  cout << "Valor de a: " << a
       << " dentro de h2()" << endl;

  ::a = 25;

  cout << "Valor de a global: "  << ::a
       << " dentro de h2()" << endl;

  a = 12;

  cout << "Valor de a: " << a
       << " dentro de h2()" << endl;

}

void
h3() {
  int a = a;

  cout << "Valor de a: " << a
    
       << " dentro de h3()" << endl;
}

void
h4() {
  int a = ::a;

  cout << "Valor de a: " << a
    
       << " dentro de h4()" << endl;
}

namespace H5 { int a = ::a; }

void
h5() {
  int a = H5::a;

  cout << "Valor de a: " << ::a
    
       << " dentro de h5()" << endl;
}

int
main(int argc, char *argv[]) {

  h1();
  h2();
  h3();
  h4();
  h5();

  return 0;
}

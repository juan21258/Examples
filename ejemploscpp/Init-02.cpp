// fichero: Init-02.C
// compilar: $ g++ -o Init-02 Init-02.C
// ejecutar: $ ./Init-02
#include <iostream>

using namespace std;

const int length = 3;

static char c;
static int  aInt;
static double aDouble;
static bool  aBool;
static int value[length];

namespace NS {
  char c;
  int  aInt;
  double aDouble;
  bool  aBool;
  int value[length];
}

void f() {
  char c;
  int  aInt;
  double aDouble;
  bool  aBool;
  int value[length];

  cout << "c: "         <<  c
       << " aInt: "     << aInt
       << " aDouble: "  << aDouble
       << " value[0]: " << value[0]
       << " value[1]: " << value[1]
       << endl;
}

int
main() {

  cout << "Valores locales de f()" << endl;
  f();

  cout << "Valores globales " << endl;

  cout << "c: "         <<  c
       << " aInt: "     << aInt
       << " aDouble: "  << aDouble
       << " value[0]: " << value[0]
       << " value[1]: " << value[1]
       << endl;

  cout << "Valores globales de NS" << endl;
  cout << "c: "         <<  NS::c
       << " aInt: "     << NS::aInt
       << " aDouble: "  << NS::aDouble
       << " value[0]: " << NS::value[0]
       << " value[1]: " << NS::value[1]
       << endl;

}

/*
 * fichero: Array-Init-05.C
 * compilar: g++ -o Array-Init-05 Array-Init-05.C
 * ejecutar: ./Array-Init-05
 */
#include <iostream>

using namespace std;

int
main(int argc, char *argv[]) {
  char a5[3] = {'a', 'b', 0};

  for (int i = 0; i < sizeof(a5) / sizeof(char); i++) {

    cout << "a5[" << i << "]=" << a5[i] << endl;
  }

  cout << "a5[]=" << a5 << endl;

  return 0;
}

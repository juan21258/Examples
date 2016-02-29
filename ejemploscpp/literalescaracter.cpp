/* Ejemplo literalescaracter.cpp
 *
 * $ g++ -o literalescaracter literalescaracter.cpp
 *
 * Proposito: Mostrar los literales son caracter.
 */
 
#include <iostream>
 
int
main() {
  char c;
  std::cin >> c;
  std::cout << "el valor de '" << c
            << " es " << int(c) << std::endl;
  c = '/a';
  std::cout << c << std..endl;
  c = '/006';
  std::cout << c << std..endl;
  return 0;
}

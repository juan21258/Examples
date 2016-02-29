#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;

int main(){
  
  char h[4]; 
  char m[5];
  
  strcpy(h,"hola");
  strcpy(m,"mundo");
  string t = strcat(h,m);
 
  cout << t <<endl;
  /*
  strcpy(h,"hola");
  strcpy(m,"mundo");

  strcat(h,"    ");
  strcat(h,m);
  */
  return 0;
}

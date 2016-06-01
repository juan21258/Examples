#include <iostream>

using namespace std;

int main(){

  int i;
  cout << "ingrese un número"<<endl;
  cin >> i;
  char ag;
  char a[i];
  string sub;
    
  for(int c =0; c<i;c++){
    cout << "ingrese un caracter"<<endl;
    cin >> ag;
    a[c]=ag;

  }
  //cout << "Los valores del arreglo son: \n" << endl;

  while(i>=0){
    sub = sub + a[i];

    i = i-1;
  }

  cout << "La cadena impresa al revés es:" <<endl;
  cout << sub <<endl;
  
  return 0;
}

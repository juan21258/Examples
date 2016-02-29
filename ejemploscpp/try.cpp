#include <iostream>
//#include <array>

using namespace std;

int main(){


  int i;
  cout << "ingrese un número"<<endl;
  cin >> i;
  int ag;
  int a[i];
  
  for(int c =0; c<i;c++){
    cout << "ingrese un número"<<endl;
    cin >> ag;
    a[c]=ag;

  }
  cout << "Los valores del arreglo son: \n" << endl;
  
  for(int sh = 0;sh<i;sh++){
    cout << "a[" << sh << "] =" << a[sh] << endl; 
    
  }
  
  return 0;
}

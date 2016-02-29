#include <iostream>
//#include <heap>
#include <stdio.h>


struct nodo{
  int dato;
  struct nodo *next;
  
  
  
}*tope=NULL, *aux;

void Apilar(int num){
  aux= new nodo;
  aux->dato=num;
  if(tope == NULL){
    tope = aux;
    aux->next=NULL;
  }else{
    aux->next=tope;
    tope = aux;
  }
}

void Listado(){
  cout << "\n datos dentro de la pila:\n"<<endl;
  aux= tope;
  while(aux!=NULL){
    cout << aux->dato<<"---" << endl;
    aux =aux->next;
    
  }
  cout << "NULL" <<endl;
}
main(){
  Apilar(5); Apilar(10);Apilar(15);Apilar(20);
  Listado();
  getch();
  
 
}

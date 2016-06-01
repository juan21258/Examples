#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

//Patrón Decorator
class ComidaAbstracta{

public:

virtual void Descripcion() = 0;	
virtual void Precio() = 0;

};

class Perro : public ComidaAbstracta{

public:

	void Descripcion(){
		cout << " Es un Perro ";

	}
	void Precio(){
		cout << " $4000";

	}

};


class Adiciones : public ComidaAbstracta
{

public:

	Adiciones(ComidaAbstracta* foodAbstracta)
	{
		_FoodAbstracta = foodAbstracta;
	}

	virtual void Descripcion() = 0;
	virtual void Precio() = 0;


protected:

	ComidaAbstracta* _FoodAbstracta;

};


class Ripio : public Adiciones
{
public:
	Ripio(ComidaAbstracta* foodAbstracta) : Adiciones(foodAbstracta){}


	virtual void Descripcion(){
		cout << "Descripcion";
		_FoodAbstracta->Descripcion();
		cout << "con ripio";
	}
	virtual void Precio(){
		cout << "su precio es:";
		_FoodAbstracta->Precio();
		cout << "";	
	}	
};

class Lechuga : public Adiciones
{
public:
	Lechuga(ComidaAbstracta* foodAbstracta) : Adiciones(foodAbstracta){}


	virtual void Descripcion(){
		cout << "Descripcion";
		_FoodAbstracta->Descripcion();
		cout << "con Lechuga";
	}
	virtual void Precio(){
		cout << "su precio es:";
		_FoodAbstracta->Precio();
		cout << "";	
	}	
};

class Tomate : public Adiciones
{
public:
	Tomate(ComidaAbstracta* foodAbstracta) : Adiciones(foodAbstracta){}


	virtual void Descripcion(){
		cout << "Descripcion";
		_FoodAbstracta->Descripcion();
		cout << "con Tomate";
	}
	virtual void Precio(){
		cout << "su precio es:";
		_FoodAbstracta->Precio();
		cout << "";	
	}	
};

class Salsa_Queso : public Adiciones
{
public:
	Salsa_Queso(ComidaAbstracta* foodAbstracta) : Adiciones(foodAbstracta){}


	virtual void Descripcion(){
		cout << "Descripcion";
		_FoodAbstracta->Descripcion();
		cout << "con Salsa de queso";
	}
	virtual void Precio(){
		cout << "su precio es:";
		_FoodAbstracta->Precio();
		cout << "";	
	}	
};

int main(){

	Ripio* comidaConRipio = new Ripio(new Perro());
	comidaConRipio->Descripcion();
	cout << endl;

	comidaConRipio->Precio();
	cout << endl;	

	Lechuga* comidaConLechuga = new Lechuga(new Perro());
	comidaConLechuga->Descripcion();
	cout << endl;

	comidaConLechuga->Precio();
	cout << endl;

	Tomate* comidaConTomate = new Tomate(new Perro());
	comidaConTomate->Descripcion();
	cout << endl;

	comidaConTomate->Precio();
	cout << endl;

	Salsa_Queso* comidaConSalsa = new Salsa_Queso(new Perro());
	comidaConSalsa->Descripcion();
	cout << endl;

	comidaConSalsa->Precio();
	cout << endl;

	delete comidaConRipio;
	delete comidaConLechuga;
	delete comidaConTomate;
	delete comidaConSalsa;

	return 0;
}

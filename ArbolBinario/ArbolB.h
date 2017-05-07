#pragma once

#include <iostream>

template <class T1>
class NodoA {
public:
	NodoA();
	NodoA(T1);
	~NodoA();

	void setDato(T1);
	void setH_i(NodoA*);
	void setH_d(NodoA*);

	T1 getDato();
	NodoA* getH_i();
	NodoA* getH_d();

private:
	T1 dato;
	NodoA* h_i;
	NodoA* h_d;
};



template <class T1>
class ArbolB
{
public:
	ArbolB();
	~ArbolB();

	bool vacio();
	NodoA<T1>* getRaiz();
	void inserta(T1, NodoA<T1>*);
	void inorden(NodoA<T1>*);

private:
	NodoA<T1>* raiz;


};


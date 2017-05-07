#include "ArbolB.h"

////////////// NodoA ////////////

template <class T1>
NodoA<T1>::NodoA()
{
	h_i = h_d = nullptr;
}

template <class T1>
NodoA<T1>::NodoA(T1 dato)
{
	this->dato = dato;
	h_i = h_d = nullptr;
}

template <class T1>
NodoA<T1>::~NodoA()
{

}

template <class T1>
void NodoA<T1>::setDato(T1 dato)
{
	this->dato = dato;
}

template <class T1>
void NodoA<T1>::setH_i(NodoA<T1>* h_i)
{
	this->h_i = h_i;
}

template <class T1>
void NodoA<T1>::setH_d(NodoA<T1>* h_d)
{
	this->h_d = h_d;
}

template <class T1>
T1 NodoA<T1>::getDato()
{
	return dato;
}

template <class T1>
NodoA<T1>* NodoA<T1>::getH_i()
{
	return h_i;
}

template <class T1>
NodoA<T1>* NodoA<T1>::getH_d()
{
	return h_d;
}

//////////////// ArbolB /////////////////

template <class T1>
ArbolB<T1>::ArbolB()
{
	raiz = nullptr;
}

template <class T1>
ArbolB<T1>::~ArbolB()
{
}

template <class T1>
bool ArbolB<T1>::vacio()
{
	if (raiz)
		return false;
	return true;
}

template <class T1>
NodoA<T1>* ArbolB<T1>::getRaiz()
{
	return raiz;
}

template <class T1>
void ArbolB<T1>::inserta(T1 dato, NodoA<T1>* Raiz)
{
	
	if (!vacio())
	{
		if (dato < Raiz->getDato())
		{
			if (Raiz->getH_i())
			{
				inserta(dato, Raiz->getH_i());
			}
			else
			{
				NodoA<T1>* nuevo = new NodoA<T1>(dato);
				Raiz->setH_i(nuevo);
			}
		}
		else
		{
			if (Raiz->getH_d())
			{
				inserta(dato, Raiz->getH_d());
			}
			else
			{
				NodoA<T1>* nuevo = new NodoA<T1>(dato);
				Raiz->setH_d(nuevo);
			}
		}

	}
	else
	{
		NodoA<T1>* nuevo = new NodoA<T1>(dato);
		raiz = nuevo;
		
	}

}


template <class T1>
void ArbolB<T1>::inorden(NodoA<T1>* raiz)
{
	if (!raiz)
		return;
	inorden(raiz->getH_i());
	std::cout << raiz->getDato() << "->";
	inorden(raiz->getH_d());
}
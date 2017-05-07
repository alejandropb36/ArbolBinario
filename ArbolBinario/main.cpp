#include <iostream>
#include "ArbolB.h"
#include "ArbolB.cpp"

using namespace std;

int main()
{
	ArbolB<int> arbol;

	arbol.inserta(9, arbol.getRaiz());
	arbol.inserta(15, arbol.getRaiz());
	arbol.inserta(7, arbol.getRaiz());
	arbol.inserta(22, arbol.getRaiz());
	arbol.inserta(11, arbol.getRaiz());
	arbol.inserta(8, arbol.getRaiz());

	arbol.inorden(arbol.getRaiz());

	cin.get();

	return 0;
}
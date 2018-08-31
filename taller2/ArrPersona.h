#pragma once
#include <iostream>
#include "Persona.h"
using namespace std;
class ArrePersona
{
private:
	Persona **arreglo;
public:
	ArrePersona();
	~ArrePersona();
	void Agregar();
	void mostrar();
};
ArrePersona::ArrePersona()
{
	arreglo = new Persona*[2];
}
void ArrePersona::Agregar()
{
	Persona*NuevaP = new Persona();
	NuevaP->setNombre("Diego");
	Persona* NuevaP2 = new Persona();
	NuevaP2->setNombre("Oscar");
	arreglo[0] = NuevaP;
	arreglo[1] = NuevaP2;
}
void ArrePersona::mostrar()
{
	for (int i=0; i<2;i++)
	{
		cout << "Nombre" << i << " : " << arreglo[i]->getNombre() <<endl;
	}
}

ArrePersona::~ArrePersona()
{

}
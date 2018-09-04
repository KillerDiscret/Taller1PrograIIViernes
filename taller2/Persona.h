#pragma once
class Persona
{
private:
	char * nombre;

public:
	Persona();
	~Persona();
	void setNombre(char*Nombre);
	char *getNombre();

};
Persona::Persona()
{
	nombre = new char[20];
}
void Persona::setNombre(char *Nombre)
{
	this->nombre = Nombre;
}
char *Persona::getNombre()
{
	return nombre;
}
Persona::~Persona()
{

}

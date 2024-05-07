#pragma once
#include <iostream>
using namespace std;

class lanchas
{
//ATRIBUTOS
private:
	int Velocidad;
	int DistanciaRecorrida;
	bool Nitro;
	string Nombre;

//METODOS
public:
	int getVelocidad();
	void setVelocidad(int velocidad);

	int getDistanciaRecorrida();
	void setDistanciaRecorrida(int distanciarecorrida);

	bool getNitro();
	void setNitro(bool nitro);

	string getName();
	void setName(string name);

	lanchas(int pVelocidad, int pDistanciaRecorrida, bool nitro, string name);

	lanchas();

	void turno();
};


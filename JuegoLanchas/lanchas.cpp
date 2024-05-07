#include "lanchas.h"


lanchas::lanchas(int pVelocidad, int pDistanciaRecorrida, bool nitro, string name) {
	Velocidad = pVelocidad;
	DistanciaRecorrida = pDistanciaRecorrida;
}

lanchas::lanchas() {

}

int lanchas::getVelocidad()
{
	return Velocidad;
}

void lanchas::setVelocidad(int velocidad)
{
	Velocidad = velocidad;
}

int lanchas::getDistanciaRecorrida()
{
	return DistanciaRecorrida;
}

void lanchas::setDistanciaRecorrida(int distanciarecorrida)
{
	DistanciaRecorrida = distanciarecorrida;
}

bool lanchas::getNitro()
{
	return Nitro;
}

void lanchas::setNitro(bool nitro)
{
	Nitro = nitro;
}

string lanchas::getName()
{
	return Nombre;
}

void lanchas::setName(string name)
{
	Nombre = name;
}

void lanchas::turno() {

	int puntosDado = rand() % 6 + 1;
	cout << "El jugador obtuvo " << puntosDado << " puntos en este turno." << "\n";
	Velocidad += puntosDado;

	cout << "La nueva velocidad de la lancha " << Nombre << " es: " << Velocidad << " km/h" << endl;
	
	int distanciaRecorridaEsteTurno = Velocidad * 100;
	
	setDistanciaRecorrida(getDistanciaRecorrida() + distanciaRecorridaEsteTurno);

	
	cout << "La distancia recorrida hasta ahora por la lancha " << Nombre << " es: " << DistanciaRecorrida << " metros" << endl;
	
}


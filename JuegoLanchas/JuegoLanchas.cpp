// JuegoLanchas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "lanchas.h"
using namespace std;

int main()
{
    lanchas lancha1 = lanchas(0, 0, true, "");
    lanchas lancha2 = lanchas(0, 0, true, "");

    for (int turno = 1; turno <= 5; turno++) {
        cout << "Turno " << turno << ":" << endl;

        // Turno de la lancha 1
        cout << "Turno de la lancha 1:" << endl;
        lancha1.turno();

        if (lancha1.getNitro()) {
            cout << "Deseas usar la nitro para la lancha 1? (1 --> si, 0 --> no): ";
            int opcion;
            cin >> opcion;

            if (opcion == 1) {
                lancha1.setNitro(false); // Desactivar la nitro después de usarse
                lancha1.turno(); // Activar la nitro
            }
        }
        // Turno de la lancha 2
        cout << "Turno de la lancha 2:" << endl;
        lancha2.turno();
        if (lancha2.getNitro()) {
            cout << "Deseas usar la nitro para la lancha 2? (1 --> si, 0 --> no): ";
            int opcion;
            cin >> opcion;

            if (opcion == 1) {
                lancha2.setNitro(false); // Desactivar la nitro después de su uso
                lancha2.turno(); // Activar la nitro
            }
        }
        cout << endl;
    }
    if (lancha1.getDistanciaRecorrida() > lancha2.getDistanciaRecorrida()) {
        cout << "¡La lancha 1 es la ganadora!" << endl;
    }
    else if (lancha1.getDistanciaRecorrida() < lancha2.getDistanciaRecorrida()) {
        cout << "¡La lancha 2 es la ganadora!" << endl;
    }
    else {
        cout << "¡empate!" << endl;
    }

    return 0;
}

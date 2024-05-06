#include <iostream>
#include "Enemigo.h"

using namespace std;

int main() {
    // Lanchas
    Lancha lancha1("Lancha 1");
    Lancha lancha2("Lancha 2");

    // Juego
    for (int turno = 1; turno <= 5; turno++) {
        cout << "\nTurno de lancha 1\n ";
        cout << lancha1.lanzarDado();
        if (lancha1.getNitro()) {
            cout << "\nPresiona 's' para usar el nitro, o cualquier otra tecla para continuar...\n";

            char tecla;
            cin >> tecla;

            if (tecla == 's' || tecla == 'S') {
                lancha1.usarNitro();
                cout << "Nitro activado!\n";
            }
        }
        lancha1.calcularDistancia();
    }

    cout << "\n------------------------";

    for (int turno = 1; turno <= 5; turno++) {
        cout << "\nTurno de lancha 2\n ";
        cout << lancha2.lanzarDado();
        if (lancha2.getNitro()) {
            cout << "\nPresiona 's' para usar el nitro, o cualquier otra tecla para continuar...\n";

            char tecla;
            cin >> tecla;

            if (tecla == 's' || tecla == 'S') {
                lancha2.usarNitro();
                cout << "Nitro activado!\n";
            }
        }
        lancha2.calcularDistancia();
    }

    // El ganador
    if (lancha1.getDistanciaRecorrida() > lancha2.getDistanciaRecorrida()) {
        cout << "\nEl ganador es " << lancha1.getNombreCorredor() << "!" << endl;
    }
    else if (lancha1.getDistanciaRecorrida() < lancha2.getDistanciaRecorrida()) {
        cout << "\nEl ganador es " << lancha2.getNombreCorredor() << "!" << endl;
    }
    else {
        cout << "\nHa habido un empate!" << endl;
    }

    return 0;
}

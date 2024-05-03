#include <iostream>

#include "conio.h"
#include "Enemigo.h"

using namespace std;

int main() {
    //lanchas
    Lancha lancha1("Lancha 1");
    Lancha lancha2("Lancha 2");

    //juego
    for (int turno = 1; turno <= 5; turno++) {
        std::cout << "\nTurno de lancha 1\n ";
        std::cout << lancha1.lanzarDado();
        if (lancha1.getNitro()) {

            std::cout << "\nPresiona 's' para usar el nitro, o cualquier otra tecla para continuar...\n";

            char tecla = _getch();

            if (tecla == 's' || tecla == 'S') {

                lancha1.usarNitro();

                std::cout << "Nitro activado!\n";

            }

        }

        lancha1.calcularDistancia();
    }


    std::cout << "\n------------------------";

    for (int turno = 1; turno <= 5; turno++) {
        std::cout << "\nTurno de lancha 2\n ";
        std::cout << lancha2.lanzarDado();
       if (lancha2.getNitro()) {

                std::cout << "\nPresiona 's' para usar el nitro, o cualquier otra tecla para continuar...\n";

                char tecla = _getch();

                if (tecla == 's' || tecla == 'S') {

                    lancha2.usarNitro();

                    std::cout << "Nitro activado!\n";

                }

            }
        lancha2.calcularDistancia();
    }

    // el ganador
    if (lancha1.getDistanciaRecorrida() > lancha2.getDistanciaRecorrida()) {
        std::cout << "\n¡El ganador es " << lancha1.getNombreCorredor() << "!" << std::endl;
    }
    else if (lancha1.getDistanciaRecorrida() < lancha2.getDistanciaRecorrida()) {
        std::cout << "\n¡El ganador es " << lancha2.getNombreCorredor() << "!" << std::endl;
    }
    else {
        std::cout << "\n¡Ha habido un empate!" << std::endl;
    }

    return 0;
}
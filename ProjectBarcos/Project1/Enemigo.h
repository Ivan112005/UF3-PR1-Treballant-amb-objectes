#pragma once

#include <iostream>

using namespace std;

class Lancha {
private:
    std::string nombreCorredor;
    int velocidad;
    int distanciaRecorrida;
    int nitro;

public:
    Lancha(std::string nombre);

    // Getters
    std::string getNombreCorredor();
    int getVelocidad();
    int getDistanciaRecorrida();
    bool getNitro();

    // Setters
    void setNombreCorredor(std::string nombre);
    void setVelocidad(int velocidad);
    void setDistanciaRecorrida(int distancia);
    void setNitro(int nitro);

    // Métodos propios
    void usarNitro();
    void calcularDistancia();
    int lanzarDado();

};



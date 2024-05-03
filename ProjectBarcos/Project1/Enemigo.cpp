#include "Enemigo.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Lancha::Lancha(std::string nombre) {
    nombreCorredor = nombre;
    velocidad = 0;
    distanciaRecorrida = 0;
    nitro = 1;
}

bool Lancha::getNitro(){ return nitro; }

std::string Lancha::getNombreCorredor() {
    return nombreCorredor;
}

int Lancha::getVelocidad() {
    return velocidad;
}

int Lancha::getDistanciaRecorrida() {
    return distanciaRecorrida;
}

void Lancha::setNombreCorredor(std::string nombre) {
    nombreCorredor = nombre;
}

void Lancha::setVelocidad(int vel) {
    velocidad = vel;
}

void Lancha::setDistanciaRecorrida(int distancia) {
    distanciaRecorrida = distancia;
}

void Lancha::setNitro(int n) {
    nitro = n;
}

void Lancha::usarNitro() {
    if (nitro) {
        srand(time(0));
        int resultado = rand() % 2;
        if (resultado == 0) {
            velocidad /= 2;
        }
        else{
            velocidad *= 2;

    }
    nitro = false;
}
}

void Lancha::calcularDistancia() {
    distanciaRecorrida += velocidad * 100;
}

int Lancha::lanzarDado() {
    int dado = rand() % 6;
    velocidad += dado;
    return dado;
}

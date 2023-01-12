/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Raúl González Acosta (alu0101543529@ull.edu.es)
 * @date   29/12/2022
 * @brief  Definición de la clase Racional.
 */

#ifndef RACIONAL_H
#define RACIONAL_H

#include <iostream>
#include <cmath>
#include <fstream>
#include <string>

void Usage(int argc, char *argv[]);

class Racional {
public:
    Racional (int numerador, int denominador);
    void Suma (Racional racional1, Racional racional2);
    void Resta (Racional racional1, Racional racional2);
    void Multiplicacion (Racional racional1, Racional racional2);
    void Division (Racional racional1, Racional racional2);

private:
    int numerador_;
    int denominador_;
};

#endif
/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Raúl González Acosta (alu0101543529@ull.edu.es)
 * @date 18/12/22
 * @brief Implementación de la clase Círculo.
*/

#include <iostream>
#include <string>

#ifndef circulo_H
#define circulo_H
class Circulo {
    public:
        enum class Color {Rojo, Verde, Azul};
        Circulo();
        Circulo(double x, double y, double r, Color c);
        void Show(int a);
        void Area(int a);
        void Perimetro(int a);
        void Print(int a);
        void IsInterior(double x, double y);
    private:
        double x_;
        double y_;
        double r_;
        Color c_;
};

#endif
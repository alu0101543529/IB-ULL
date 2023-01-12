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
#include <cmath>
#include "circulo.h"

/**
 * @brief Constructor por defecto
 * @param[in] x: referencia (constante) al primer punto
 * @param[in] y: referencia (constante) al segundo punto
 * @param[in] r: referencia al radio
 * @param[in] c: referencia al color
 */

Circulo::Circulo() : x_{0}, y_{0}, r_{0}, c_{Color::Rojo} {
  // std::cout << "Ejecutado el constructor por defecto de Circulo." << std::endl;
}

/**
 * @brief Constructor por parámetros
 * @param[in] x: referencia (constante) al primer punto
 * @param[in] y: referencia (constante) al segundo punto
 * @param[in] r: referencia al radio
 * @param[in] c: referencia al color
 */

Circulo::Circulo(double x, double y, double r, Color c) : x_{x}, y_{y}, r_{r}, c_{c} {
  // std::cout << "Ejecutado el constructor por parámetros de Circulo." << std::endl;
}

/**
 * @brief Mostrar las coordenadas de los dos puntos
 * @param[in] x: referencia (constante) al primer punto
 * @param[in] y: referencia (constante) al segundo punto
 */

void Circulo::Show(int a) {
    std::cout << "El círculo " << a << " tiene las coordenadas: (" << x_ << ", " << y_ << ")" << std::endl;
}

/**
 * @brief Método para calcular el area del circulo
 * @param[in] r: referencia al radio
 */

void Circulo::Area(int a) {
    double area = M_PI * pow(r_, 2);
    std::cout << "El área del círculo " << a << " es: " << area << std::endl;
}

/**
 * @brief Método para calcular el perímetro del círculo
 * @param[in] r: referencia (constante) al radio
 */

void Circulo::Perimetro(int a) {
    double perimetro = 2 * M_PI * r_;
    std::cout << "El perímetro del círculo " << a << " es: " << perimetro << std::endl;
}

/**
 * @brief Método para imprimir el color del círculo
 * @param[in] c: referencia al color
 */

void Circulo::Print(int a) {
    switch (c_) {
        case Color::Rojo:
            std::cout << "El color del círculo " << a << " es: Rojo" << std::endl;
            break;
        case Color::Verde:
            std::cout << "El color del círculo " << a << " es: Verde" << std::endl;
            break;
        case Color::Azul:
            std::cout << "El color del círculo " << a << " es: Azul" << std::endl;
            break;
    }
}

/**
 * @brief Método para comprobar si un punto esta dentro del círculo
 * @param[in] x: referencia (constante) al primer punto
 * @param[in] y: referencia (constante) al segundo punto
 */

void Circulo::IsInterior(double x, double y) {
    double distancia = sqrt(pow(x - x_, 2) + pow(y - y_, 2));
    if (distancia <= r_) {
        std::cout << "El punto (" << x << ", " << y << ") está dentro del círculo" << std::endl;
    } else {
        std::cout << "El punto (" << x << ", " << y << ") está fuera del círculo" << std::endl;
    }
}
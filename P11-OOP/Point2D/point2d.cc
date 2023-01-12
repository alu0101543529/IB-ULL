/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Raúl González Acosta (alu0101543529@ull.es)
 * @date 13/12/22
 * @brief Implementación de la clase punto.
 */

#include <iostream>
#include <string>
#include <cmath>

#include "point2d.h"

/**
 * @brief Constructor por defecto
 * @param[in] punto1: referencia (constante) al primer punto
 * @param[in] punto2: referencia (constante) al segundo punto
 */

Point2D::Point2D(): x_{0}, y_{0} {
  // std::cout << "Ejecutado el constructor por defecto de Punto." << std::endl;
}
/**
 * @brief Constructor con parámetros
 * @param[in] punto1: referencia (constante) al primer punto
 * @param[in] punto2: referencia (constante) al segundo punto
 */

Point2D::Point2D(double x, double y): x_{x}, y_{y} {
  // std::cout << "Ejecutado el constructor con parámetros de Punto." << std::endl;
}

/**
 * @brief Mostrar las coordenadas de los dos puntos
 * @param[in] punto1: referencia (constante) al primer punto
 * @param[in] punto2: referencia (constante) al segundo punto
 */

void Point2D::Show(int a) {
    std::cout << "Las coordenadas del punto" << a << " son: (" << x_ << ", " << y_ << ")" << std::endl;    
}

/**
 * @brief Mover los dos puntos
 * @param[in] punto1: referencia (constante) al primer punto
 * @param[in] punto2: referencia (constante) al segundo punto
 */

void Point2D::Move(double x, double y) {
    x_ = x;
    y_ = y;

    std::cout << "Las coordenadas del punto han sido cambiadas a: (" << x_ << ", " << y_ << ")" << std::endl;
}

/**
 * @brief Distancia entre dos puntos
 * @param[in] punto1: referencia (constante) al primer sumando
 * @param[in] punto2: referencia (constante) al segundo sumando
 */

double Point2D::Distance(Point2D p) {
    double distance = sqrt(pow((p.x_ - x_), 2) + pow((p.y_ - y_), 2));
    return distance;
}

/**
 * @brief Punto medio de dos puntos
 * @param[in] punto1: referencia (constante) al primer punto
 * @param[in] punto2: referencia (constante) al segundo punto
 */

Point2D Point2D::Middle(Point2D p) {
    double x = (p.x_ + x_) / 2;
    double y = (p.y_ + y_) / 2;
    Point2D middle(x, y);
    return middle;
}

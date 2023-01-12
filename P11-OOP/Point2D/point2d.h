/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Raúl González Acosta (alu0101543529@ull.edu.es)
 * @date 13/12/22
 * @brief Implementación de la clase punto.
*/

#ifndef POINT2D_H
#define POINT2D_H

class Point2D {
  public:
    Point2D();
    Point2D(double x, double y);
    /// Muestra las coordenadas de los dos puntos
    void Show(int a);
    /// Cambia las coordenadas/Mueve los dos puntos
    void Move(double x, double y);
    /// Distancia entre dos puntos
    double Distance(Point2D p);
    /// Punto medio entre dos puntos
    Point2D Middle(Point2D p);
  private:
    double x_; /// Componente x
    double y_; /// Componente y
};

#endif
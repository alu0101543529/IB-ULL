/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Raúl González Acosta (alu0101543529@ull.edu.es)
 * @date 29/12/2022
 * @brief Implementación de la clase Robot
 */

#ifndef ROBOT_H
#define ROBOT_H

#include <iostream>
#include <vector>
#include <string>

enum class Bearing {
  NORTH,
  EAST, 
  SOUTH, 
  WEST
};
typedef std::pair <int,int> Posicion;
class Robot {
  public:
    // Constructores
    Robot() = default;
    Robot(Posicion p, Bearing b) : position_(p), bearing_(b) {}
    // Getters
    Bearing get_bearing() const;
    Posicion get_position() const;
    // Movimientos
    void turn_right();
    void turn_left();
    void advance();
    void execute_sequence (const std::string&);
  private:
    Posicion position_ = {0,0};
    Bearing bearing_ = Bearing::NORTH;
};

#endif

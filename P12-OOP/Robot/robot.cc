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

#include "robot.h"

/**
* @brief Esta función devuelve la posición del robot.
* @param[in] position_: Posición del robot.
* @return Devuelve la posición del robot.
*/
Bearing Robot::get_bearing() const { 
  return bearing_; 
}

/**
* @brief Esta función devuelve la dirección en la que se encuentra el robot.
* @param[in] bearing_: Dirección en la que se encuentra el robot.
* @return Devuelve la dirección en la que se encuentra el robot.
*/
Posicion Robot::get_position() const { 
  return position_;
}

/**
* @brief Esta función gira el robot a la derecha.
* @param[in] bearing_: Dirección en la que se encuentra el robot.
*/
void Robot::turn_right() {
  switch(bearing_) {
    case Bearing::NORTH: bearing_ = Bearing::EAST;  break;
    case Bearing::EAST:  bearing_ = Bearing::SOUTH; break;
    case Bearing::SOUTH: bearing_ = Bearing::WEST;  break;
    case Bearing::WEST:  bearing_ = Bearing::NORTH; break;
  }
}

/**
* @brief Esta función gira el robot a la izquierda.
* @param[in] bearing_: Dirección en la que se encuentra el robot.
*/
void Robot::turn_left()
{
  switch(bearing_) { 
    case Bearing::NORTH: bearing_ = Bearing::WEST;  break;
    case Bearing::EAST:  bearing_ = Bearing::NORTH; break;
    case Bearing::SOUTH: bearing_ = Bearing::EAST;  break;
    case Bearing::WEST:  bearing_ = Bearing::SOUTH; break;
  }
}

/**
* @brief Esta función mueve al robot una posición hacia adelante.
* @param[in] bearing_: Dirección en la que se encuentra el robot.
* @param[in] position_: Posición del robot.
*/
void Robot::advance()
{
  int& x = position_.first;
  int& y = position_.second;
  switch(bearing_) {
    case Bearing::NORTH: ++y; break;
    case Bearing::EAST:  ++x; break;
    case Bearing::SOUTH: --y; break;
    case Bearing::WEST:  --x; break;
  }
}

/**
* @brief Esta función ejecuta una secuencia de comandos.
* @param[in] commands: Secuencia de comandos a realizar.
*/
void Robot::execute_sequence (const std::string& commands)
{
  for (auto command : commands) {
    switch (command) {
      case 'R': turn_right(); break;
      case 'L': turn_left();  break;
      case 'A': advance();    break;
      default: throw "Invalid command" +std::string (1,command);
    }
  }
}
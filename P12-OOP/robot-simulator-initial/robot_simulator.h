/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F de Sande
 * @date Jan, 4 2022
 * @brief Robot class
 * @See https://exercism.org/tracks/cpp/exercises/robot-simulator
 */

#if !defined(ROBOT_SIMULATOR_H)
#define ROBOT_SIMULATOR_H

#include <iostream>   // std::cout
#include <string>     // std::string
#include <utility>    // std::pair

namespace robot_simulator {
  enum class Bearing { 
    NORTH, 
    EAST,
    SOUTH, 
    WEST
  };

  class Robot {
   public:
    Robot() : position_{0, 0}, bearing_{Bearing::NORTH} {
      std::cout << "Ejecutado el Constructor sin parámetros" << std::endl;
    }
    Robot(std::pair<int, int> position, Bearing bearing) : position_{position}, bearing_{bearing}  {
      std::cout << "Ejecutado el Constructor con parámetros" << std::endl;
    }
    std::pair<int, int> get_position() const { return position_; }
    Bearing get_bearing() const { return bearing_; }
   private:
    std::pair<int, int> position_;
    Bearing bearing_;
  };
}  // namespace robot_simulator

#endif // ROBOT_SIMULATOR_H

/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F de Sande
 * @date Jan, 4 2022
 * @brief Robot Simulator main
 *        Este fichero no es necesario para pasar los tests de Exercism
 *        Se incluye con la finalidad de facilitar la depuración del código
 *        conforme se va desarrollando el mismo y antes de pasarle los tests de Exercism.
 *
 *        Para pasar los tests de exercism, ejecutar 
 *        cmake ..
 *        en el directorio build
 *
 * @See https://exercism.org/tracks/cpp/exercises/robot-simulator
 */

#include <iostream>
#include <string>
#include <utility>

#include "robot_simulator.h"


using robot_simulator::Robot;
using robot_simulator::Bearing;

/*
 * @brief Robot Client main function
 */
int main() {
  Robot r1;
  const std::pair<int, int> position{0, 0};
  const Bearing bearing {Bearing::NORTH};
  Robot r2{position, bearing};
  return 0;
}


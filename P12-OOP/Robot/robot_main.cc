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

int main (int argc, char *argv[]) {
const std::pair <int, int> kPosition {0, 0};
const Bearing kBearing {Bearing::NORTH};
Robot robot {kPosition, kBearing};
std::string sequence;
getline (std::cin, sequence);
for (const auto& movement : sequence) {
  switch (movement) {
    case 'R': robot.turn_right(); break;
    case 'L': robot.turn_left();  break;
    case 'A': robot.advance();    break;
    default: throw "Invalid command" +std::string (1,movement);
  }
}
std::pair <int, int> final_position = robot.get_position();
std::cout << "(" << final_position.first << ", " << final_position.second << ")" << std::endl;
return 0;
}
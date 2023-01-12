/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Raúl González Acosta (alu0101543529@ull.edu.es)
 * @date 09/01/2023
 * @brief Programa cliente de la clase Robot limitada a un tablero 20x20.
 */

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
    //Restricciones
    void correct_position();
  private:
    Posicion position_ = {0,0};
    Bearing bearing_ = Bearing::NORTH;
};

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
void Robot::turn_left() {
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
void Robot::advance() {
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
void Robot::execute_sequence (const std::string& commands) {
  for (auto command : commands) {
    switch (command) {
      case 'R': turn_right(); break;
      case 'L': turn_left();  break;
      case 'A': advance();    break;
      default: throw "Invalid command" +std::string (1,command);
    }
  }
}

void Robot::correct_position () {
  int& x = position_.first;
  int& y = position_.second;
  if (x > 20) {
    const std::pair <int, int> kPosition {0, 0};
		const Bearing kBearing {Bearing::NORTH};
  }
  else if (y > 20) {
    const std::pair <int, int> kPosition {0, 0};
		const Bearing kBearing {Bearing::NORTH};
  }
}

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


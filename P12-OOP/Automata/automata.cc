/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Raúl González Acosta (alu0101543529@ull.edu.es)
 * @date   29/12/2022
 * @brief  Implementación de la clase Automata.
 */

#include "automata.h"

/** Muestra el modo de uso correcto del programa
 *  En caso de que el uso no sea el correcto, muestra el mensaje y finaliza
 *  la ejecución del programa.
 *  @param[in] argc Numbero de parámetros.
 *  @param[in] argv Vector con los parámetros.
 */
void Usage (int argc, char *argv[]) {
  if (argc > 2) {
    std::cout << argv[0] << ": Ha introducido más de un parámetro." << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información." << std::endl;
    exit(EXIT_SUCCESS);
  }
  if (argc != 2) {
    std::cout << argv[0] << ": Falta un fichero como parámetro." << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información." << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

/**
 * @brief Esta función imprime el número de estados, el estado de arranque y los estados de aceptación.
 * @param[in] fichero: Fichero desde el que leen los valores.
*/

void Automata::Cardinal (const std::string fichero) {
  std::ifstream archivo{fichero, std::ios::in};
  int numero_estados, estado_arranque; 
  archivo >> numero_estados >> estado_arranque; // Extraemos los dos primeros números
  std::cout << "|Q| = " << numero_estados << std::endl;
  std::cout << "q0 = " << estado_arranque << std::endl;
  std::string estados_aceptados{"F = {"};
  std::string linea{""};
  while (getline(archivo, linea)) {
    if (linea.length() > 0) {
      if (linea.at(2) == '1') { // Si el segundo caracter es 1, lo guardamos
        estados_aceptados += linea.at(0);
        estados_aceptados += ", ";
      }
    }
  }
  for (int i = 0; i<static_cast <int> (estados_aceptados.length()) - 2; ++i) { // El -2 es para no añadir un ", " que sobra al final
    std::cout << estados_aceptados[i];
  }
  std::cout << "}" << std::endl;
}

/**
 * @brief Esta función imprime la función de transición.
 * @param[in] fichero: Fichero desde el que leen los valores.
*/

void Automata::FuncionTransicion (const std::string fichero) {
  std::ifstream archivo{fichero, std::ios::in};
  std::string estado;
  std::cout << "Funcion de transición:" << std::endl;
  while (getline (archivo, estado)) {
    if (estado.length() > 0) {
      std::cout << estado << std::endl;
    }
  }
}
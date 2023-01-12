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

/** Función main.
 * @param[in] argc Número de parámetros
 * @param[in] argv Vector con los parámetros
 */
int main(int argc, char* argv[]) {
  Usage(argc, argv);
  Automata automata;
  automata.Cardinal (argv[1]);
  automata.FuncionTransicion (argv[1]);
  return 0;
}
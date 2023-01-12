/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Raúl González Acosta (alu0101543529@ull.edu.es)
 * @date 29/11/2022
 * @brief Este programa, dado un fichero de texto que se pasa por parámetro,
 *        borra las líneas en blanco que contenga.
 */

#include "rotate.h"

/** Función main.
 *  @param[in] argc Número de parámetros
 *  @param[in] argv Vector con los parámetros
 */
int main(int argc, char* argv[]) {
  Usage(argc, argv);
  RuedaVocales(argv[1]);
  return 0;
}

/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Raúl González Acosta (alu0101543529@ull.edu.es)
 * @date 27/11/2022
 * @brief Este programa, almacena las palabras de un fichero pasado por parámetro
 *        el ficheros con nombre A.txt, B.txt ... Z.txt. Estos ficheros contienen
 *        las palabras que empiezan por esas letras.
 */

#include "abecedario.h"

/** Función main.
 *  @param[in] argc Número de parámetros
 *  @param[in] argv Vector con los parámetros
 */
int main(int argc, char* argv[]) {
  // Usage(argc, argv);
  const std::string kNombreFichero{argv[1]};
  std::string textoficherosolopalabras{TextoSinCaracteres(kNombreFichero)};
  SeparaEnFicherosAlfabeticamente(textoficherosolopalabras);
  return 0;
}

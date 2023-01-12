/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Raúl González Acosta (alu0101543529@ull.edu.es)
 * @date 12/12/2022
 * @brief Este programa, dado un fichero de texto que se pasa por parámetro,
 *        imprime la palabra con mayor y menor número de letras.
 */

#include "text-minmax.h"

/** Función main.
 *  @param[in] argc Número de parámetros
 *  @param[in] argv Vector con los parámetros
 */
int main(int argc, char* argv[]) {
  Usage(argc, argv);
  /// Abrimos el fichero en modo lectura
  const std::string kNombreFichero{argv[1]};
  std::ifstream fichero{kNombreFichero, std::ios_base::in};
  /// Leemos las líneas del fichero
  std::string linea, menos_letras, mas_letras;
  while (getline(fichero, linea)) {
    PalabraConMasLetras(linea, mas_letras);
    PalabraConMenosLetras(linea, menos_letras);
  }
  /// Imprimimos los resultados
  std::cout << "Palabra con más letras: " << mas_letras << std::endl;
  std::cout << "Palabra con menos letras: " << menos_letras << std::endl;
  return 0;
}

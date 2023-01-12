/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Raul González Acosta (alu0101543529@ull.edu.es)
 * @date 12/12/2022
 * @brief Este programa, dado un fichero de texto que se pasa por parámetro,
 *        imprime la palabra con mayor y menor número de letras.
 */

#include "text-minmax.h"

/** Muestra el modo de uso correcto del programa
 *  En caso de que el uso no sea el correcto, muestra el mensaje y finaliza
 *  la ejecución del programa.
 *  @param[in] argc Numbero de parámetros.
 *  @param[in] argv Vector con los parámetros.
 */
void Usage(int argc, char *argv[]) {
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
 *  @brief Esta función cuenta las letras de una palabra.
 *  @param[in] palabra: Palabra para contar sus letras.
 *  @return Devuelve el número de letras.
 */
int CuentaLetras(const std::string& palabra) {
  int letras{0};
  for (const auto &caracter_actual : palabra) {
    if (isalpha(caracter_actual)) {
      ++letras;
    }
  }
  return letras;
}

/** 
 *  @brief Esta función busca la palabra con mayor número de letras.
 *  @param[in] linea: Linea de la que va a extraer palabras.
 *  @param[out] mas_letras_anterior: La modificará si alguna de las que comprueba la supera.
 *  @return No devuelve nada, pero puede cambiar mas_letras_anterior.
 */
int PalabraConMasLetras (const std::string& linea, std::string& mas_letras_anterior) {
  std::string palabra{""}; /// Para ir almacenando las palabras de la línea
  for (const auto &caracter_actual : linea) {
    if (!isalpha(caracter_actual)) {
      if (CuentaLetras(palabra) > CuentaLetras(mas_letras_anterior)) {
        mas_letras_anterior = palabra;
      }
      palabra = "";
    } else {
      palabra += caracter_actual;
    }
  }
  if (CuentaLetras(palabra) > CuentaLetras(mas_letras_anterior)) {
    mas_letras_anterior = palabra;
  }
  return 0;
}

/**
 *  @brief Esta función busca la palabra con menor número de letras.
 *  @param[in] linea: Linea de la que va a extraer palabras.
 *  @param[out] menos_letras_anterior: La modificará si alguna de las que comprueba la supera.
 *  @return No devuelve nada, pero puede cambiar menos_letras_anterior.
 */
int PalabraConMenosLetras (const std::string& linea, std::string& menos_letras_anterior) {
  std::string palabra{""}; /// Para ir almacenando las palabras de la línea
  for (const auto &caracter_actual : linea) {
    if (!isalpha(caracter_actual)) {
      if (CuentaLetras(palabra) < CuentaLetras(menos_letras_anterior)) {
        menos_letras_anterior = palabra;
      }
      palabra = "";
    } else {
      palabra += caracter_actual;
    }
  }
  if (CuentaLetras(palabra) < CuentaLetras(menos_letras_anterior)) {
    menos_letras_anterior = palabra;
  }
  return 0;
}


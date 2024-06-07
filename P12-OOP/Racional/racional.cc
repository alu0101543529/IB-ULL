/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Raúl González Acosta (alu0101543529@ull.edu.es)
 * @date   29/12/2022
 * @brief  Implementación de la clase Racional.
 */

#include "racional.h"

/** Muestra el modo de uso correcto del programa
 *  En caso de que el uso no sea el correcto, muestra el mensaje y finaliza
 *  la ejecución del programa.
 *  @param[in] argc Numbero de parámetros.
 *  @param[in] argv Vector con los parámetros.
 */
void Usage (int argc, char *argv[]) {
  if (argc > 2) {
    std::cout << argv[0] << "-- Números racionales" << std::endl;
    std::cout << "Modo de uso: " << argv[0] << " fichero_entrada fichero_salida" << std::endl;
    exit(EXIT_SUCCESS);
  }
  if (argc != 2) {
    std::cout << argv[0] << "-- Números racionales" << std::endl;
    std::cout << "Modo de uso: " << argv[0] << " fichero_entrada fichero_salida" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    std::cout << argv[0] << ": Falta un fichero como parámetro." << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información." << std::endl;
    std::cout << std::endl;
    std::cout << "fichero_entrada: Fichero de texto conteniendo líneas con un par de números racionales: `a/b c/d` separados por un espacio" << std::endl;
    std::cout << "fichero_salida:  Fichero de texto que contendrá líneas con las operaciones realizadas: `a/b + c/d = n/m`" << std::endl;
    exit(EXIT_SUCCESS);
  }
}

/**
 * @brief Constructor por defecto
 * @param[in] numerador: referencia al numerador del número racional.
 * @param[in] denominador: referencia al denominador del número racional.
 */
Racional::Racional (int numerador, int denominador) {
  numerador_ = numerador;
  denominador_ = denominador;
}

/**
 * @brief Suma de dos racionales
 * @param[in] racional1: referencia al primer número racional a sumar.
 * @param[in] racional2: referencia al segundo número racional a sumar.
*/
void Racional::Suma (Racional racional1, Racional racional2) {
  int numerador = racional1.numerador_ * racional2.denominador_ + racional2.numerador_ * racional1.denominador_;
  int denominador = racional1.denominador_ * racional2.denominador_;
  std::cout << "La suma de los racionales es: " << numerador << "/" << denominador << std::endl;
}

/**
 * @brief Resta de dos racionales
 * @param[in] racional1: referencia al primer número racional a restar.
 * @param[in] racional2: referencia al segundo número racional a restar.
*/
void Racional::Resta (Racional racional1, Racional racional2) {
  int numerador = racional1.numerador_ * racional2.denominador_ - racional2.numerador_ * racional1.denominador_;
  int denominador = racional1.denominador_ * racional2.denominador_;
  std::cout << "La resta de los racionales es: " << numerador << "/" << denominador << std::endl;
}

/**
 * @brief Multiplicación de dos racionales
 * @param[in] racional1: referencia al primer número racional a multiplicar.
 * @param[in] racional2: referencia al segundo número racional a multiplicar.
*/
void Racional::Multiplicacion (Racional racional1, Racional racional2) {
  int numerador = racional1.numerador_ * racional2.numerador_;
  int denominador = racional1.denominador_ * racional2.denominador_;
  std::cout << "La multiplicación de los racionales es: " << numerador << "/" << denominador << std::endl;
}

/**
 * @brief División de dos racionales
 * @param[in] racional1: referencia al primer número racional a dividir.
 * @param[in] racional2: referencia al segundo número racional a dividir.
*/
void Racional::Division (Racional racional1, Racional racional2) {
  int numerador = racional1.numerador_ * racional2.denominador_;
  int denominador = racional1.denominador_ * racional2.numerador_;
  std::cout << "La división de los racionales es: " << numerador << "/" << denominador << std::endl;
}

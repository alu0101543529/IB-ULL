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

int main() {
  Racional racional1 (1, 2);
  Racional racional2 (1, 3);
  Racional racional3 (0, 0);
  racional3.Suma (racional1, racional2);
  racional3.Resta (racional1, racional2);
  racional3.Multiplicacion (racional1, racional2);
  racional3.Division (racional1, racional2);
  return 0;
}
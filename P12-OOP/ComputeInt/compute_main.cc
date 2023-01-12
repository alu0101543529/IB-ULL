/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Raúl González Acosta (alu0101543529@ull.edu.es)
 * @date   20/12/2022
 * @brief  Programa cliente de la clase ComputeInt.
 */

#include <iostream>

#include "compute.h"
 
int main() {
  std::cout << "Programa cliente de la clase ComputeInt" << std::endl;
  ComputeInt computation; 
  std::cout << "Factorial: " << computation.Factorial(5) << std::endl; 
  std::cout << "Suma de la serie: " << computation.SumSerie(100) << std::endl; 
  std::cout << "Armstrong: " << computation.EsArmstrong(153) << std::endl;
  std::cout << "Primo: " << computation.EsPrimo(18) << std::endl;
  std::cout << "Perfecto: " << computation.EsPerfecto(28) << std::endl;
  std::cout << "Es primo y perfecto: " << computation.EsPrimoPerfecto(1) << std::endl;
  std::cout << "Balanceado: " << computation.EstaBalanceado(1463) << std::endl;
  std::cout << "Primos relativos: " << computation.SonPrimosRelativos(13, 17) << std::endl;
  return 0;
}

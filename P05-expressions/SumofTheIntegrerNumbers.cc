 /**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file SumofTheIntegrerNumbers.cc
 * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
 * @date 31/10/2022
 * @brief This program sums three integrer numbers.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P41221_en
 */

#include<iostream>

int main() {
  int number1;
  int number2;
  int number3;

  std::cin >> number1 >> number2 >> number3;
  std::cout << number1 + number2 + number3 << std::endl;
  return 0;
}

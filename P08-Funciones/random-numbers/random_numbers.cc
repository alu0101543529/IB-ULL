/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file random_numbers.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 15/11/2022
  * @brief Es un programa que genera un número aleatorio real en el intervalo [n, m].
  * @bug There are no known bugs
  * @see https://github.com/IB-2022-2023/P08-functions/blob/main/functions.md
  */

#include <iostream>
#include <cstdlib>

double RandomNumber (int n, int m) {
    double random_number = std::rand() % m + n;
  return random_number;
}

int main () {
unsigned int n, m;
std::cin >> n >> m;
std::cout << RandomNumber(n, m) << std::endl;
return 0;
}
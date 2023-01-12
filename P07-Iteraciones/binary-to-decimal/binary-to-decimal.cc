/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file binary-to-decimal.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 08/11/2022
  * @brief Es un programa que convierte números binarios en decimal.
  * @see https://github.com/IB-2022-2023/P07-iterations/blob/main/iterations.md
  */

#include <iostream>
#include <cmath>

int convert(long long int binario);

int main() {
  long long int binario;
  std::cin >> binario;
  std::cout << convert(binario) << std::endl;
  return 0;
}

int convert(long long int binario) {
  int decimal=0, i=0, resto;

  while (binario!=0) {
    resto=binario%10;
    binario/=10;
    decimal+=resto*std::pow(2, i);
    ++i;
  }
  return decimal;
}
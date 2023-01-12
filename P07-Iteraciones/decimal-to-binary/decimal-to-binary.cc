/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file decimal-to-binary.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 08/11/2022
  * @brief Es un programa que convierte números decimales en binarios.
  * @see https://github.com/IB-2022-2023/P07-iterations/blob/main/iterations.md
  */


#include <iostream>
#include <cmath>
using namespace std;

long long convert(int decimal);

int main() {
  int decimal, binario;
  std::cin >> decimal;
  binario = convert(decimal);
  std::cout << binario << std::endl ;
  return 0;
}

long long convert(int decimal) {
  long long binario {0};
  int resto, i {1};

  while (decimal!=0) {
    resto=decimal%2;
    decimal/= 2;
    binario+=resto*i;
    i*=10;
  }

  return binario;
}
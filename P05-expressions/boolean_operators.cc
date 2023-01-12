/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file boolean_operators.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 30/10/2022
  * @brief Es un programa que imprime en pantalla la tabla de verdad de los operadores lógicos (and, or, not) de C++, suando dos variables booleanas (p, q)
  * @bug There are no known bugs
  * @see https://github.com/IB-2022-2023/P05-expressions/blob/main/expressions.md
  */

#include <iostream>

int main () {
    std::cout << "p   q   and   or   not(p)   not(q)" << std::endl;
    std::cout << "0   0    0    0      1        1" << std::endl;
    std::cout << "0   1    0    1      1        0" << std::endl;
    std::cout << "1   0    0    1      0        1" << std::endl;
    std::cout << "1   1    1    1      0        0" << std::endl;
return 0;
}
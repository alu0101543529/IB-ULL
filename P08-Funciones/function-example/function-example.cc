/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file function-example.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 15/11/2022
  * @brief Es un programa que realiza el cálculo de una función matemática de tres variables.
  * @bug There are no known bugs
  * @see https://github.com/IB-2022-2023/P08-functions/blob/main/functions.md
  */

#include <iostream>
#include <cmath>

double FunctionCalculation (double x, double y, double t) {
    double numerador = sqrt(2 * t - 4);
    double denominador = pow(x , 2) - pow(y , 2);
    double resultado = numerador/denominador;
  return resultado;
}

int main () {
double x, y, t;
std::cin >> x >> y >> t;
std::cout << FunctionCalculation(x, y, t) << std::endl;
return 0;
}
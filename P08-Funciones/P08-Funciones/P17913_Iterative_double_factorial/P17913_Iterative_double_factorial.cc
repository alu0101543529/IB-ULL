/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P17913_Iterative_double_factorial.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 19/11/2022
  * @brief Es un programa que el doble factorial de un número.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P17913_en
  */

#include <iostream>

int double_factorial(int numero) {
    int resultado {1};
    for (int i = numero; i > 1; i -= 2) {
        resultado *= i;
    }
    return resultado;
}

int main () {
	int numero;
    while (std::cin >> numero) {
        std::cout << double_factorial(numero) << std::endl;
    }
}

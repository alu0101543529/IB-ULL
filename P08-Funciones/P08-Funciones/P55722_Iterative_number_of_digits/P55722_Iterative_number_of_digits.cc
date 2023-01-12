/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P55722_Iterative_number_of_digits.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 19/11/2022
  * @brief Es un programa que devuelve el número de dígitos de un número.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P55722_en
  */

#include <iostream>

int number_of_digits(int n) {
    int c {0};
    while (n >= 10) {
        n /= 10;
        c++;
    }
    return c+1;
}

int main () {
	int n;
    while (std::cin >> n) {
        std::cout << number_of_digits(n) << std::endl;
    }
}

/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P36668_Sum_of_squares.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 14/11/2022
  * @brief Es un programa que lee un número natural n e imprime el resultado de la siguiente suma: 1² + 2² + ... + (n−1)² + n².
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P36668_en
  */

#include <iostream>

int main () {
	int numero;
    std::cin >> numero;
    int resultado {0};
    for (int intervalo = 1; intervalo <= numero; intervalo++) {
      resultado += intervalo*intervalo;
    }
    {
        std::cout << resultado << std::endl;
    }
}

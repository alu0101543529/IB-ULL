/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P79817_Powers.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 14/11/2022
  * @brief Es un programa que opera potencias.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P79817_en
  */

#include <iostream>

int main () {
	int base,exponente;
    while (std::cin >> base) {
        int resultado {1};
        std::cin >> exponente;
        for (int i=0; i<exponente; i++) {
            resultado*=base;
        }
        std::cout << resultado << std::endl;
    }
}

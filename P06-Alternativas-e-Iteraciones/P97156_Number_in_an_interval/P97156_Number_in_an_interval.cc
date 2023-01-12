/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P97156_Numbers_in_an_interval.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 02/11/2022
  * @brief Es un programa que lee dos números a y b, e imprime todos los números entre a y b.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P97156_en
  */

#include <iostream>

int main () {
	int numero_a,numero_b;
    std::cin >> numero_a >> numero_b;
    for (int intervalo = numero_a; intervalo < numero_b; intervalo++) {
        std::cout << intervalo << ",";
    }
    if (numero_b >= numero_a) {
        std::cout << numero_b;
    }
    std::cout << std::endl;
}
/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P59539_Harmonic_numbers_1_.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 02/11/2022
  * @brief Es un programa que lee un número n e imprime el n-ésimo número armónico, definido como Hn = 1/1 + 1/2 + ... + 1/n.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P59539_en
  */

#include <iostream>
#include <iomanip>

int main () {
    int numero;
    std::cin >> numero;
    double armonico = 0.0;
    for (double intervalo = 1; intervalo <= numero; intervalo++) {
        armonico += 1.0/intervalo;
    }
    if (armonico < 0.0 ) armonico *= -1;
    std::cout << std::fixed << std::setprecision(4) << armonico << std::endl;
}

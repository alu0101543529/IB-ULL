/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file leap-year.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 04/11/2022
  * @brief Es un programa que dice si un año es o no bisiesto.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P61634_en
  */

#include <iostream>

int main () {
	int año;
    std::cin >> año;
    if (año%100==0) {
        if (año%400==0) {
            std::cout << "YES" << std::endl;
        }
        else {
            std::cout << "NO" << std::endl;
        }
    }
    else if (año%4==0) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }
}
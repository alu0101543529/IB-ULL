/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P58153_Harmonic_Numbers_2.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 07/11/2022
  * @brief Es un programa que lee pares de números n y m con n ≥ m, y para cada par imprime Hn − Hm.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P58153
  */

#include <iostream>
#include <iomanip>

int main () {
	int numero1, numero2;
    while (std::cin >> numero1) {
	    std::cin >> numero2;
        double armonico = 0.0;
        for (double i = numero2+1; i <= numero1; i++) {
            armonico += 1.0/i;
        }
        if (armonico < 0.0 ) armonico *= -1;
	std::cout << std::fixed << std::setprecision(10) << armonico << std::endl;
    }
}

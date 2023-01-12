/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P73501_Increasing_pairs.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 07/11/2022
  * @brief Es un programa que lee secuencias de números naturales, y que para cada uno imprime el número de pares de números consecutivos tal que el segundo número del par es mayor que el primero.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P73501_en
  */

#include <iostream>

int main () {
	int numero;
	std::cin >> numero;
    for (int i = 0; i < numero; i++) {
        int variablea = -1, variableb = -1, variablec = 0;
        while (variablea != 0) {
		std::cin >> variablea;
            if ( variablea > variableb and variableb != -1) variablec++;
            variableb = variablea;
        }
	std::cout << variablec << std::endl;
    }
}

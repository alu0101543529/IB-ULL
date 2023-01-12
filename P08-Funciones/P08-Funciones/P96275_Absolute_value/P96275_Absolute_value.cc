/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P96275_Absolute_value.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 18/11/2022
  * @brief Es un programa que devuelve el valor absoluto de un numero entero.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P96275_en
  */

#include <iostream>

int absolute(int numero) {
    if (numero < 0) {
		numero = numero * -1;
		}
	return numero;
}

int main() {
    int numero;
    std::cin >> numero;
    std::cout << absolute(numero) << std::endl;
}

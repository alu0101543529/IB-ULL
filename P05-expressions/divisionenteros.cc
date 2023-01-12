/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file divisionenteros.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 21/10/2022
  * @brief Es un programa que lee dos números naturales a y b, con b > 0, e imprime la división entera d y el resto r de a dividido por b.
  * @bug There are no known bugs
  * @see https://github.com/IB-2022-2023/P05-expressions/blob/main/expressions.md
  */

#include <iostream>

int main() {
	int numero1;
  int numero2; numero2 > 0;
	  std::cin >> numero1;
    std::cin >> numero2;
	int cociente = numero1/numero2;
	int resto = numero1%numero2;
	std::cout << cociente << " " << resto << std::endl;
	return 0;
}
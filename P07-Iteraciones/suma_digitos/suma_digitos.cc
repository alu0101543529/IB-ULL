/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file suma_digitos.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 08/11/2022
  * @brief Es un programa que imprime la suma de los digitos de un numero.
  * @see https://github.com/IB-2022-2023/P07-iterations/blob/main/iterations.md
  */

#include <iostream>

int main () {
	long long int numero;
    while (std::cin >> numero) {
        int suma = 0;
        while (numero >= 1) {
            suma += numero%10;
            numero/=10;
        }
        std::cout << suma << std::endl;
        break;
    }
}
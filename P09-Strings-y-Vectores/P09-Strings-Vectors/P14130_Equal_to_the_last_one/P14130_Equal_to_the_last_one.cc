/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P14130_Equal_to_the_last_one.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 28/11/2022
  * @brief Es un programa que lee una secuencia no vacía de números enteros y dice cuántos de ellos son iguales al último.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P14130_en
  */

#include <iostream>
#include <vector>

int main() {
    int numero;
    std::cin >> numero;
    std::vector <int> v(numero);
    int j = 0;
    for (int i = 0; i<numero; i++) {
        std::cin >> v[i];
    }
    for (int i = numero-2; i >= 0; i--) {
        if (v[numero-1] == v[i]) {
          j++;
        }
    }
    std::cout << j << std::endl;
}

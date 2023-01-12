/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file fibonacci_serie.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 08/11/2022
  * @brief Es un programa que imprime los n primeros términos de la Serie de Fibonacci.
  * @see https://github.com/IB-2022-2023/P07-iterations/blob/main/iterations.md
  */

#include <iostream>

int main() {
    int n_terminos, termino1 {0}, termino2 {1}, terminon {0};

    std::cout << "Introduzca el número de términos: ";
    std::cin >> n_terminos;

    std::cout << "Serie de Fibonacci: ";

    for (int i = 1; i <= n_terminos; ++i) {
        if(i == 1) {
            std::cout << termino1 << " ";
            continue;
        }
        if(i == 2) {
            std::cout << termino2 << " ";
            continue;
        }
        terminon = termino1 + termino2;
        termino1 = termino2;
        termino2 = terminon;
        
        std::cout << terminon << " ";
    }
    std::cout << std::endl;
    return 0;
}
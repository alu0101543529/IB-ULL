/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file change-case_main.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 18/11/2022
  * @brief Es un programa que lee una palabra con caracteres en mayúscula y 
           minúscula, y cambia las mayúsculas por minúsculas, y viceversa.
  * @bug There are no known bugs
  * @see https://github.com/IB-2022-2023/P08-functions/blob/main/functions.md
  */

#include <iostream>

int main () {
    char letra;
    std::cin >> letra;
    int asciiletras {32};

    char minuscula = letra + asciiletras;
    char mayuscula = letra - asciiletras;
    
    if (65 <= letra && letra <= 90) {
       std::cout << minuscula << std::endl;
    }
    else if (97 <= letra && letra <= 122) {
       std::cout << mayuscula << std::endl;
    }
    else {
    std::cout << "Carácter no válido" << std::endl;
    }
}
/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P98960_Uppercase_and_lowercase_letters.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 02/11/2022
  * @brief Es un programa que lee una letra mayúscula y muestra por pantalla su correspondiente letra minúscula, y viceversa.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P98960_en
  */

#include <iostream>

int main () {
    char letra;
    std::cin >> letra;
    int asciiletras {32};

    char minuscula = letra + asciiletras; // Siguiendo la relación de la tabla ASCII entre la "A" mayúscula y la "a" minúscula, hay una diferencia de 32 caráteres, y así sucesivamente con el resto de letras, ya que están ordenadas alfabéticamente. /
    char mayuscula = letra - asciiletras; // Siguiendo la relación de la tabla ASCII entre la "a" minuscula y la "A" mayúscula, hay una diferencia de 32 caráteres, y así sucesivamente con el resto de letras, ya que están ordenadas alfabéticamente. /
    
    if (65 <= letra && letra <= 90) { // Como el primer carácter, osea "A", es el entero 65, y el uĺtimo, sea "Z", es el entero 90, se delimita que solo se "aceptan" los carácteres introducidos entre esos valores. /
       std::cout << minuscula << std::endl;
    }
    else if (97 <= letra && letra <= 122) { // Como el primer carácter, osea "a", es el entero 97, y el uĺtimo, sea "z", es el entero 122, se delimita que solo se "aceptan" los carácteres introducidos entre esos valores. /
       std::cout << mayuscula << std::endl;
    }
    else { // En caso contrario, se reconoce como "Caracter no válido" /
    std::cout << "Carácter no válido" << std::endl;
    }
}
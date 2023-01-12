/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file desinflado.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 25/10/2022
  * @brief Es un programa que lee una letra mayúscula y muestra por pantalla su correspondiente letra minúscula.
  * @bug There are no known bugs
  * @see https://github.com/IB-2022-2023/P05-expressions/blob/main/expressions.md
  */

#include <iostream>

int main () {
    char letra;
    std::cin >> letra;
    int letraminuscula {32};

    letra = letra + letraminuscula; // Siguiendo la relación de la tabla ASCII entre la "A" mayúscula y la "a" minúscula, hay una diferencia de 32 caráteres, y así sucesivamente con el resto de letras, ya que están ordenadas alfabéticamente. /
    
    if (65 <= letra && letra >= 90) { // Como el primer carácter, osea "A", es el entero 65, y el uĺtimo, sea "Z", es el entero 90, se delimita que solo se "aceptan" los carácteres introducidos entre esos valores. /
       std::cout << letra << std::endl;
    }
   else { // En caso contrario, se reconoce como "Caracter no válido" /
    std::cout << "Carácter no válido" << std::endl;
    }
}

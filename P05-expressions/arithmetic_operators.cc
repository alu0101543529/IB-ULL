/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file arithmetic_operators.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 30/10/2022
  * @brief Es un programa que que declara e inicializa variables de tipos aritméticos e imprime en pantalla el resultado de operar esas variables con todos los operadores que pueda utilizar con ellas.
  * @bug There are no known bugs
  * @see https://github.com/IB-2022-2023/P05-expressions/blob/main/expressions.md
  */

#include <iostream>

int main() {
	int numero1;
    std::cout << "Introduzca el primer número: " << std::endl;
    std::cin >> numero1;
    
    int numero2;
    std::cout << "Introduzca el segundo número: " << std::endl;
    std::cin >> numero2;

    std::cout << numero1 << " + " << numero2 << " = " << numero1+numero2 << std::endl;
    std::cout << numero1 << " - " << numero2 << " = " << numero1-numero2 << std::endl; 
    std::cout << numero1 << " * " << numero2 << " = " << numero1*numero2 << std::endl;
    std::cout << numero1 << " / " << numero2 << " = " << numero1/numero2 << std::endl;
    std::cout << numero1 << " % " << numero2 << " = " << numero1%numero2 << std::endl;
return 0;
}
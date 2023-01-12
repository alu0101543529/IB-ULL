/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P90615_Maximum_of_three_integer_numbers.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 02/11/2022
  * @brief Es un programa que imprime el máximo de tres números enteros.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P90615_en
  */
 
#include <iostream>


int main() {
  int number1;
  int number2;
  int number3;

  std::cin >> number1 >> number2 >> number3;
  if(number1 >= number2 && number1 >= number3)
  {
      std::cout <<""<< number1 << std::endl;
  }

  else if(number2 >= number1 && number2 >= number3)
  {
      std::cout <<""<< number2 << std::endl;
  } 
  else if (number3 >= number1 && number3 >= number2)
  {
      std::cout <<""<< number3 << std::endl;
  }
}
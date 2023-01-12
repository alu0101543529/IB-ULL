/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P34279_Add_one_second.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 02/11/2022
  * @brief Es un programa que suma un segundo al tiempo de un reloj, dadas sus horas, minutos y segundos.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P34279_en
  */
 
#include <iostream>
#include <iomanip>

int main () {
	int horas, minutos ,segundos;
	std::cin >> horas >> minutos >> segundos;
	segundos++;
	if (segundos==60) {
		minutos++;
		segundos = 0;
	}
	if (minutos==60) {
		horas++;
		minutos = 0;
	}
	if (horas==24) horas = 0;
	std::cout << std::setfill('0') << std::setw(2) << horas << ":" 
		  << std::setfill('0') << std::setw(2) << minutos << ":" 
		  << std::setfill('0') << std::setw(2) << segundos << std::endl;
}

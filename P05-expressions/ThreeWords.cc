/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file ThreeWords.cc
 * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
 * @date 31/10/2022
 * @brief This program reads tree words and show them in the inverted order in
 * which it was inserted.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P62421_en
 */

#include <iostream>
#include <cstdio>

int main() {
  std::string word1;
  std::string word2;
  std::string word3;

  std::cin >> word1 >> word2 >> word3;
  std::cout << word3 << " " << word2 << " " << word1 << std::endl;
  return 0;
}

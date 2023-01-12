/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P11725_Sequential_search_in_an_array.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 28/11/2022
  * @brief Es un programa que dice si el número entero x está presente en el vector de números enteros v.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P11725_en
  */

#include <iostream>
#include <vector>

bool exists (int x, const std::vector<int>& V) {
    int n = V.size();
    for (int i = 0; i<n; i++) {
        if (V[i] == x) {
            return true;
        }
    }
    return false;
}

int main () {}

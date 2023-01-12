/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file triangle-area.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 15/11/2022
  * @brief Es un programa que calcula el área de un triángulo utilizando la Fórmula de Herón.
  * @bug There are no known bugs
  * @see https://github.com/IB-2022-2023/P08-functions/blob/main/functions.md
  */

#include <iostream>
#include <cmath>

double Area (double a, double b, double c, int s, double area) {
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}

int main() {
  double a, b, c, area;
  int s;
  std::cin >> a >> b >> c;
  std::cout << Area(a, b, c, s, area) << std::endl;
  return 0;
}


if (a < 0 || b < 0 || c < 0 || (a + b <= c) || a + c <= b || b + c <= a)
    {
        cout << "Not a valid triangle";
    }
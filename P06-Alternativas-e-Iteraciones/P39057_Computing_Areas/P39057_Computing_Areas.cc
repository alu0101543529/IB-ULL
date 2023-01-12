/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P39057_Computing_areas.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 07/11/2022
  * @brief Es un programa que lee varias descripciones de rectángulos y círculos, y para cada uno imprime su área correspondiente.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P39057_en
  */

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main () {
	double x, y, r, pi = atan(1)*4;
    string des;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> des;
        if (des == "rectangle") {
            cin >> x >> y;
            cout << fixed << setprecision(6) << x*y << endl;
        } else {
            cin >> r;
            cout << fixed << setprecision(6) << r*r*pi << endl;
        }
    }
}

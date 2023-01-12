/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Raúl González Acosta (alu0101543529@ull.edu.es)
 * @date   20/12/2022
 * @brief  Clase ComputeInt
 */

#include <iostream>

#ifndef COMPUTE_H
#define COMPUTE_H

class ComputeInt {
 public:
  int Factorial(int numero);
  int SumSerie(int limite);
  bool EsArmstrong(int numero);
  bool EsPerfecto(int numero);
  bool EsPrimo(int numero);
  bool EsPrimoPerfecto(int numero);
  bool EstaBalanceado(int numero);
  bool SonPrimosRelativos(int numero1, int numero2);
};

#endif
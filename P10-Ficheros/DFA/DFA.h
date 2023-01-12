/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Raúl González Acosta (alu0101543529@ull.edu.es)
 * @date 1/12/2022
 * @brief Este programa lee un fichero con especificación sobre un autómata finito
 *        determinista e imprime por pantalla las características del mismo.
 */

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

const std::string kHelpText = "Este programa lee un fichero con especificacion sobre un automata finito determinista.";

void Usage(int argc, char *argv[]);
int ImprimeCardinal(const std::string nombre_fichero);
int ImprimeFuncionTransicion(const std::string nombre_fichero);

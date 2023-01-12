/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Raúl González Acosta (alu0101543529@ull.edu.es)
 * @date   29/12/2022
 * @brief  Implementación de la clase Automata.
 */

#include <iostream>
#include <fstream>
#include <string>

#ifndef AUTOMATA_H
#define AUTOMATA_H

const std::string kHelpText = "Este programa lee un fichero con especificación sobre un automata finito determinista.";
void Usage(int argc, char *argv[]);

class Automata {
  public:
    void Cardinal (const std::string fichero);
    void FuncionTransicion (const std::string fichero);
  private:
    int numero_estados, estado_arranque;
    std::string estados_aceptados;
    std::string estado;
};

#endif
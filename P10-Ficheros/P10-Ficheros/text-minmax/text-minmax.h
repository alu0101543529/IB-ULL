/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Raul González Acosta (alu0101543529@ull.edu.es)
 * @date 12/12/2022
 * @brief Este programa, dado un fichero de texto que se pasa por parámetro,
 *        imprime la palabra con mayor y menor número de letras.
 */

#include <iostream>
#include <fstream>
#include <string>

const std::string kHelpText = "Este programa muestra la palabra con mayor y menor número de letras";

void Usage(int argc, char *argv[]);
int CuentaLetras(const std::string& palabra);
int PalabraConMasLetras(const std::string& linea, std::string& mas_letras_anterior);
int PalabraConMenosLetras(const std::string& linea, std::string& menos_letras_anterior);


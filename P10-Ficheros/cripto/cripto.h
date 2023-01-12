/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Raúl González Acosta (alu0101543529@ull.edu.es)
 * @date 1/12/2022
 * @brief Este programa encripta y desencripta ficheros.
 */

#include <iostream>
#include <string>
#include <fstream>

void Usage(int argc, char *argv[]);
char CodificarCaracterCaesar(const char letra, const int numero);
char DescodificarCaracterCaesar(const char letra, const int numero);
void EncriptarCaesar(const std::string& nombre_fichero_entrada, const std::string& nombre_fichero_salida, const int numero);
void DesencriptarCaesar(const std::string& nombre_fichero_entrada, const std::string& nombre_fichero_salida, const int numero);
void EncriptarXOR(const std::string& nombre_fichero_entrada, const std::string& nombre_fichero_salida, const std::string& contrasena);
std::string OperarContrasena(const std::string& contrasena);

# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Raúl González Acosta (alu0101543529@ull.edu.es)
# @date 18/12/2022
# @brief A Makefile for the Circulo class code

CXX = g++						                              # The C++ compiler command
CXXFLAGS = -std=c++17 -g -Wall -pedantic -Weffc++ # The C++ compiler options (C++14, preserve debug symbols and warn all)
LDFLAGS =						                              # The linker options (if any)

# The all target builds all of the programs handled by the makefile.
all: circulo_main

circulo_main: circulo.o circulo_main.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

# Indicate that the all and clean targets do not
# correspond to actual files.
.PHONY: all clean

# The following rule is effectively built into make and
# therefore need not be explicitly specified:
# circulo.o: circulo.cc
#
	$(CXX) $(CXXFLAGS) -c $<

# The clean target removes all of the executable files
# and object files produced by the build process
# We can use it for additional housekeeping purposes
clean :
	rm -f *.o circulo_main doc
	rm -rf *~ basura b i
	rm -rf a.out
	find . -name '*~' -exec rm {} \;
	find . -name basura -exec rm {} \;

# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Raúl González Acosta
# @date 13/12/2022
# @brief Makefile clase punto.
# 

CXX = g++						                                      # C++ compiler command
CXXFLAGS = -std=c++17 -g -Wall -Wextra -pedantic -Weffc++ # C++ compiler options 
LDFLAGS =						                                      # Linker options (if any)

# The all target builds all of the programs handled by the makefile.
all: point2d_main

point2d_main: point2d.o point2d_main.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

# Indicate that the all and clean targets do not
# correspond to actual files.
.PHONY: all clean

# The following rule is effectively built into make and
# therefore need not be explicitly specified:
# point2d.o: point2d.cc
#
	$(CXX) $(CXXFLAGS) -c $<

# The clean target removes all of the executable files
# and object files produced by the build process
# We can use it for additional housekeeping purposes
clean :
	rm -f *.o point2d_main doc
	rm -rf *~ basura b i
	rm -rf a.out
	find . -name '*~' -exec rm {} \;
	find . -name basura -exec rm {} \;

 # Universidad de La Laguna
 # Escuela Superior de Ingeniería y Tecnología
 # Grado en Ingeniería Informática
 # Informática Básica
 #
 # @author Raúl González Acosta (alu0101543529@ull.edu.es)
 # @date 29/11/2022

CXX = g++						             # The C++ compiler command
CXXFLAGS = -std=c++14 -g -Wall	 # The C++ compiler options (C++14, preserve debug symbols and warn all)
LDFLAGS =						             # The linker options (if any)

# The all target builds all of the programs handled by the makefile.
all: abecedario

abecedario: abecedario.o abecedario_main.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

# Indicate that the all and clean targets do not
# correspond to actual files.
.PHONY: all clean

# The following rule is effectively built into make and
# therefore need not be explicitly specified:
# abecedario.o: abecedario.cc
	$(CXX) $(CXXFLAGS) -c $<

# The clean target removes all of the executable files
# and object files produced by the build process
# We can use it for additional housekeeping purposes
clean :
	rm -f *.o abecedario doc A.txt B.txt C.txt D.txt E.txt F.txt G.txt H.txt I.txt J.txt K.txt L.txt M.txt N.txt O.txt P.txt Q.txt R.txt S.txt T.txt U.txt V.txt W.txt X.txt Y.txt Z.txt
	rm -rf a.out
	find . -name '*~' -exec rm {} \;
	find . -name basura -exec rm {} \;

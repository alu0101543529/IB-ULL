#include <iostream>

int countMultiples(int n) {
	int resultado = 0;
	for (int i=1; i<=n; i++) {
		if (i%7 == 0) {
			resultado++;
		}
	}
	return resultado;
}

int main() {
	int n;
	std::cin >> n;
	std::cout << countMultiples(n) << std::endl;
	return 0;
}

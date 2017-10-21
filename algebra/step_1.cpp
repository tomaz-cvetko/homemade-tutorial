#include <iostream>
#include <cmath>

int* odstej(int* a, int* b, int* result) {
	for (int i = 0; i < 3; ++i) {

		*(result + i) = *(a + i) - *(b + i);
	}
	return result;
}

int* sestej(int* a, int* b, int* result) {
	for (int i = 0; i < 3; ++i) {

		*(result + i) = *(a + i) + *(b + i);
	}
	return result;
}

int skalarni_produkt(int* vector_a, int* vector_b) {
	int skalar = 0;
	for (int i = 0; i < 3; i++) {
		skalar = skalar + (vector_a[i] * vector_b[i]);
	}
	return skalar;
}

void print_vector(int* vector_a) {
	std::cout << "( ";
	for (int i = 0; i < 3; ++i) {
		std::cout << vector_a[i];
		if (i < 2) {
			std::cout << ", " ;
		}
	}

	std::cout << ")" << std::endl;
}

int main() {
	int x[3] = { 2, 2, 2 };
	int y[3] = { 2, 1, 0 };
	int result[3];

	int vector_a[3] = { 1,2,3 };
	int vector_b[3] = { 1,0,0 };
	int produkt = skalarni_produkt(vector_a, vector_b);

	sestej(x, y, result);
	//std::cout << "Rezultat je vektor: ( ";


	odstej(x, y, result);
	//std::cout << "Rezultat je vektor: ( ";


	print_vector(vector_a);
	//std::cout << " produkt " << produkt << std::endl;


	skalarni_produkt(vector_a, vector_b);
	//std::cout << "Skalarni produkt = " << produkt << std::endl;

	return 0;
}

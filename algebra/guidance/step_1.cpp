#include <iostream>
#include <cmath>

int* odstej(int* a, int* b, int* rezultat) {
	for(int i = 0; i < 3; ++i) {
		
		*(rezultat + i) = *(a +i) - *(b + i);
	}
	return rezultat;
}

int* sestej(int* a, int* b, int* rezultat) {
	for(int i = 0; i < 3; ++i){
		
		*(rezultat + i) = *(a + i) + *(b + i);
	}
	return rezultat;
}

int skalarni_produkt (int* vector_a, int* vector_b) {
	int skalar = 0;
		for (int i = 0; i < 3; i++) {
			skalar = skalar + (vector_a[i] * vector_b[i]);
		}
	return skalar;
		
}

void print_vector(int* vector_a) {
	std::cout << "(";
	for(int i = 0; i < 3; ++i){
		std::cout << vector_a[i];
		if (i < 2){
			std::cout << ", ";
		}
	}
	std::cout << ")" << std::endl;
}
	
int main() {
	int x[3] = {2, 2, 2};
	int y[3] = {2, 1, 0};
	int result[3];
	
	int a[3] = {1,2,3};
	int b[3] = {1,0,0};
	int produkt = skalarni_produkt(a,b);

	sestej(x, y, result);
	print_vector(result);
	
	std::cout<< " produkt " << produkt << std::endl;

	odstej(x, y, result);
	return 0;
}

	

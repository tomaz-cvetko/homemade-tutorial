#include <iostream>
#include <cmath>

int skalarni_produkt (int* vector_a, int* vector_b) {
		int skalar = 0;
		 for (int i = 0; i < 3; i++) {
		   skalar = skalar + (vector_a[i] * vector_b[i]);
		return skalar;
		 }
}
int main () {
	int a[3] = {1,2,3};
	int b[3] = {1,0,0};
	int produkt = skalarni_produkt(a,b);
	std::cout<< " produkt " << produkt << std::endl;
  return 0;
}

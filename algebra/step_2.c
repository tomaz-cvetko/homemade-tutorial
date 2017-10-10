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
	int vector_a[3] = {1,2,3};
	int vector_b[3] = {1,0,0};
	int produkt = skalarni_produkt(a,b);
	 skalarni_produkt(vector_a, vector_b, skalar);
	  std::cout<< " produkt " << std::endl;
  return 0;
}

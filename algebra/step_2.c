#include <iostream>
#include <cmath>

float skalarni_produkt* (int vector_a*, int vector_b*, float phi*, float skalar*) {
		*skalar = (*vector_a) * (*vector_b) * (*phi);
		return skalar;
}
int main () {
	int vector_a[3] = {5,2,1};
	int vector_b[3] = {3,1,1};
	float skalar[3];
	 skalarni_produkt(vector_a, vector_b, skalar);
	  std::cout<< " Skalarni produkt = "; 
	   for(int i = 0; i < 3; ++i){
		std::cout << result[i];
		 if (i < 2){
			std::cout << ", ";
		}
	 return skalar;
   }
}

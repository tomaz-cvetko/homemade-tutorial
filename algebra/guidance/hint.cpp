#include <iostream>

int* sestej(int* a, int* b, int* rezultat)
{
	// ker imajo vektorji 3 komponente, gres cez vsako posebej s stevcem i < 3
	// vsako od komponent sestejes a in b in shranis v rezultat
	for(int i = 0; i < 3; ++i){
		// i mest naprej od mesta kamor kaze rezultat shrani vsoto i-te komponente a-ja in b-ja
		
		*(rezultat + i) = *(a + i) + *(b + i);


	}
	// vrni kazalec na prvo mesto rezultata
	return rezultat;
}



int main()
{
	int x[3] = {2, 2, 2};
	int y[3] = {2, 1, 0};
	int result[3];

	sestej(x, y, result);

	std::cout << "Rezultat je vektor: ( ";
	for(int i = 0; i < 3; ++i){
		std::cout << result[i];
		if (i < 2){
			std::cout << ", ";
		}
	}
	std::cout << ")" << std::endl;

	return 0;
}

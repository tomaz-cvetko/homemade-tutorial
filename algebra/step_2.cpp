#include <iostream>

struct PrimitiveVec{
	PrimitiveVec(){
		// naredi nic - konstruktor
	}
	
	PrimitiveVec(int a1, int a2, int a3){
		x = a1;
		y = a2;
		z = a3;
	}
	int x;
	int y;
	int z;
};

void printaj(PrimitiveVec izhodni){
	std::cout << "( ";
	std::cout << izhodni.x;
	std::cout << ", ";
	std::cout << izhodni.y;
	std::cout << ", ";
	std::cout << izhodni.z;
	std::cout << ")";
}

PrimitiveVec sestej(PrimitiveVec a, PrimitiveVec b) {
	PrimitiveVec c;
	c.x = a.x + b.x;
	c.y = a.y + b.y;
	c.z = a.z + b.z;
	return c;
}

float skalarni_produkt(PrimitiveVec a, PrimitiveVec b) {
	float rezultat;
	PrimitiveVec c;
	c.x = a.x * b.x;
	c.y = a.y * b.y;
	c.z = a.z * b.z;
	rezultat = c.x + c.y + c.z;
	return rezultat;
}

PrimitiveVec odstej(PrimitiveVec a, PrimitiveVec b) {
	PrimitiveVec c;
	c.x = a.x - b.x;
	c.y = a.y - b.y;
	c.z = a.z - b.z;
	return c;
}

int main(){
	
	PrimitiveVec vector_a(1, 2, 3);
	PrimitiveVec vector_b;
	
	//vector_a.x = 1;
	//vector_a.y = 2;
	//vector_a.z = 3;
	
	vector_b.x = 4;
	vector_b.y = 5;
	vector_b.z = 6;
	
	std::cout << "Vector_a: ";
	printaj(vector_a);
	std::cout << "\nVector_b: ";
	printaj(vector_b);
	
	std::cout << "\n";
	std::cout << "Vsota: ";
	PrimitiveVec k = sestej(vector_a,vector_b);
	printaj(k);

	std::cout << "\n";
	std::cout << "Razlika: ";
	PrimitiveVec m = odstej(vector_a, vector_b);
	printaj(m);
	
	std::cout << "\n";
	float rezultat = skalarni_produkt(vector_a, vector_b);
	std::cout << "Skalarni produkt: " << rezultat << std::endl;
	
	return 0;
}
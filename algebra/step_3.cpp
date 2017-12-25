#include <iostream>

class AdvancedVec {
	public: 
	   void set_values (int a1, int a2, int a3);
	   void print_vector();

    private: 
       int x;
       int y;
       int z;	   
};

void AdvancedVec::set_values(int a1, int a2, int a3) {
	x = a1;
	y = a2;
	z = a3;
}

void AdvancedVec::print_vector() {
	std::cout << "Vector_a: " << x << y << z << std::endl;
}

int main() {
	AdvancedVec vector_a;
	AdvancedVec vector_b;
	
	std::cout << "Vector_a: ";
	
	
	
 return 0;	
}
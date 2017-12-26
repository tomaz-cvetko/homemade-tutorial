#include <iostream>

class AdvancedVec {
	public: 
	   vector(int, int, int);
	   void set_values (int a1, int a2, int a3) {value = (a1, a2, a3);}
	   int get_values () {return value;}

	private: 
		int value;
		int x;
		int y;
		int z;	   
};

AdvancedVec::vector(int a1, int a2, int a3) {
	x = a1;
	y = a2;
	z = a3;
	value = (a1, a2, a3);
}

int main() {
	AdvancedVec vector_a;
	AdvancedVec vector_b;
	vector_a.set_values(1, 2, 3);
	vector_b.set_values(4, 5, 6);
	
	std::cout << "Vector_a: " << vector_a.get_values() << std::endl;
	std::cout << "Vector_b: " << vector_b.get_values() << std::endl;
	
 return 0;	
}
#include <iostream>
#include <string>
#include <cmath>

class AdvancedVec {
		public:
			std::string vector;
		private:
			int x;
			int y;
			int z;
};

/*void print_vector(AdvancedVec print) {
	std::cout << << std::endl;
}

AdvancedVec sestej(AdvancedVec a, AdvancedVec b) {
	AdvancedVec c;
	c = a + b;
	return c;
} */

int main() {
	AdvancedVec vector_a;
	AdvancedVec vector_b;
	
	vector_a.vector = "(1, 2, 3)";
	vector_b.vector = "(4, 5, 6)";
	
	std::cout << "Vector_a: " << vector_a.vector << std::endl;
	std::cout << "Vector_b: " << vector_b.vector << std::endl;
	
	/*std::cout << "\n";
	std::cout << "Vsota: "; 
	AdvancedVec m = sestej(vector_a, vector_b);
	print_vector(m); */
	
	return 0;
}
#include <iostream>

class AdvancedVec {
	public: 
	   void set_values (int a1, int a2, int a3);
	   int x = a1;
	   int y = a2;
	   int z = a3;

    private: 
       int x;
       int y;
       int z;	   
};

int main() {
	AdvancedVec vector_a;
	AdvancedVec vector_b;
	
	vector_a.x = 1;
	vector_a.y = 2;
	vector_a.z = 3;
	
	vector_b.x = 4;
	vector_b.y = 5;
	vector_b.z = 6;
		
}
#include <iostream>
#include <cmath>

class AdvancedVec {
	public: 
		AdvancedVec(){
			
		}
		void set_values (int a1, int a2, int a3){
					x = a1;
					y = a2;
					z = a3;
				}
		void print_vector(){
					std::cout <<"( " << x << ", " << y << ", " << z <<")";
				}
		addition(AdvancedVec a, AdvancedVec b) {
					AdvancedVec c;
					c.x = a.x + b.x;
					c.y = a.y + b.y;
					c.z = a.z + b.z;
					std::cout << "( " << c.x << ", " << c.y << ", " << c.z << ")"<< std::endl;
				}
		subtraction(AdvancedVec a, AdvancedVec b){
					AdvancedVec m;
					m.x = a.x - b.x;
					m.y = a.y - b.y;
					m.z = a.z - b.z;
					std::cout << "( " << m.x << ", " << m.y << ", " << m.z << ")"<< std::endl;
				}
		float skalarni_produkt(AdvancedVec a, AdvancedVec b){
					float skalar;
					skalar = a.x * b.x + a.y * b.y + a.z * b.z;
					return skalar;
				}
		float vector_length(AdvancedVec a){
			float length;
			length = sqrt(a.x * a.x + a.y * a.y + a.z * a.z);
			return length;
		}
		vector_scalar(AdvancedVec a, int b) {
			AdvancedVec n;
			int t = 5;
			n.x = t * a.x;
			n.y = t * a.y;
			n.z = t * a.z;
			std::cout <<"( " << n.x << ", " << n.y << ", " << n.z << ")" << std::endl;
		}
		vektorski_produkt (AdvancedVec a, AdvancedVec b) {
			AdvancedVec s;
			s.x = a.y * b.z - a.z * b.y;
			s.y = a.x * b.z - a.z * b.x;
			s.z = a.x * b.y - a.y - b.x;
			std::cout <<"( " << s.x << ", " << s.y << ", " << s.z << ")" << std::endl;
		}

	private: 
		int x;
		int y;
		int z;	   
};

int main() {
	AdvancedVec vector_a;
	AdvancedVec vector_b;
	AdvancedVec sum;
	AdvancedVec difference;
	AdvancedVec skalar;
	AdvancedVec length;
	AdvancedVec number;
	AdvancedVec vektor;
	
	std::cout << "Vector_a: ";
	vector_a.set_values (1, 2, 3);
	vector_a.print_vector();
	
	std::cout <<"\n";
	std::cout << "Vector_b: ";
	vector_b.set_values (4, 5, 6);
	vector_b.print_vector();
	
	std::cout << "\n";
	std::cout << "Vsota: " ;
	sum.addition(vector_a, vector_b);
	
	std::cout <<"Razlika: ";
	difference.subtraction(vector_a, vector_b);
	
	float rezultat = skalar.skalarni_produkt(vector_a, vector_b);
	std::cout <<"Skalarni produkt: " << rezultat << std::endl;
	
	float dolzina_a = length.vector_length(vector_a);
	std::cout <<"Dolzina vector_a: " << dolzina_a << std::endl;
	float dolzina_b = length.vector_length(vector_b);
	std::cout <<"Dolzina vector_b: " << dolzina_b << std::endl;
	
	std::cout << "Vector_a pomnozen s skalarjem: ";
	number.vector_scalar(vector_a, 5);
	std::cout << "Vector_b pomnozen s skalarjem: ";
	number.vector_scalar(vector_b, 5);
	
	std::cout <<"Vektorski produkt vectorja_a in vectorja_b: ";
	vektor.vektorski_produkt(vector_a, vector_b);
	
 return 0;	
}
#include <iostream>

#include "vektor.h"

int main(){
    std::cout << "Hello world!" << std::endl;

    Vektor<float> a(1, 2, 3);
    Vektor<float> b = Vektor<float>::fromCylindric(12.3, 1.2, 5);
    Vektor<float> e = Vektor<float>::fromSpheric(4, 1.2, 1.6);
    
    float c = a*b;
    
    Vektor<float> d = a - b;
    std::cout << c << std::endl;
    
    return 0;
}

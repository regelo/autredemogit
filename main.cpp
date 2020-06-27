#include <iostream>

#include "fonction.h"

int main() {
	std::cout << "Mon outil est plus meilleur, ctun DEWALT!" << std::endl;
    int x = 50;

    x = x + 1;
    x = x * x;
    x++;
    afficher(x);
    
    std::cout << "une modification" << std::endl;
}

/* Do Programming Exercise 6, but instead of declaring an array of three
CandyBar structures, use new to allocate the array dynamically */

#include <iostream>

struct CandyBar {
	std::string name;
	float weight;
	int calories;
};



int main(void) {

    std::string represent;

    CandyBar* pt = new CandyBar[3];
    *pt = {
		"Mocha Munch",
		2.3,
		350
	};

	*(pt + 1) = {
		"Banana split",
		1.2,
		250
	};       
    
    *(pt + 2) = {
		"Frozen yogurt",
		1.3,
		470
	};

    std::cout << "First sweet:" << std::endl;
    std::cout << "brand name: " << (*pt).name << ";" << std::endl; 
    std::cout << "weight: " << (*pt).weight << ";" << std::endl;
    std::cout << "calories: " << (*pt).calories << ";" << std::endl;
    std::cout << std::endl;

    std::cout << "Second sweet:" << std::endl;
    std::cout << "brand name: " << pt[1].name << ";" << std::endl; 
    std::cout << "weight: " << pt[1].weight << ";" << std::endl;
    std::cout << "calories: " << pt[1].calories << ";" << std::endl;
	std::cout << std::endl;

    std::cout << "Third sweet:" << std::endl;
    std::cout << "brand name: " << pt[2].name << ";" << std::endl; 
    std::cout << "weight: " << pt[2].weight << ";" << std::endl;
    std::cout << "calories: " << pt[2].calories << ";" << std::endl;
    std::cout << std::endl;

    delete [] pt;
}


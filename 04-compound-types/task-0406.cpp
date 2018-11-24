/* The CandyBar structure contains three members,as described in Programming
Exercise 5. Write a program that creates an array of three CandyBar structures,
initializes them to values of your choice,and then displays the contents of
each structure. */

#include <iostream>

int main(void) {

    std::string represent;

    struct CandyBar {
        std::string name;
        float weight;
        int calories;
    };

    CandyBar sweets[3] = {
        {
        	"Mocha Munch",
        	2.3,
        	350
        },
        {
        	"Banana split",
        	1.2,
        	250
        },        
        {
        	"Frozen yogurt",
        	1.3,
        	470
        }
    };

    std::cout << "First sweet:" << std::endl;
    std::cout << "brand name: " << sweets[0].name << ";" << std::endl; 
    std::cout << "weight: " << sweets[0].weight << ";" << std::endl;
    std::cout << "calories: " << sweets[0].calories << ";" << std::endl;
    std::cout << std::endl;

    std::cout << "Second sweet:" << std::endl;
    std::cout << "brand name: " << sweets[1].name << ";" << std::endl; 
    std::cout << "weight: " << sweets[1].weight << ";" << std::endl;
    std::cout << "calories: " << sweets[1].calories << ";" << std::endl;
	std::cout << std::endl;

    std::cout << "Third sweet:" << std::endl;
    std::cout << "brand name: " << sweets[2].name << ";" << std::endl; 
    std::cout << "weight: " << sweets[2].weight << ";" << std::endl;
    std::cout << "calories: " << sweets[2].calories << ";" << std::endl;
    std::cout << std::endl;
    
}
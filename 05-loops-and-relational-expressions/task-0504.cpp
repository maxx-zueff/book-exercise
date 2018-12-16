/*Daphne invests $100 at 10% simple interest.That is, every year, the
investment earns 10% of the original investment, or $10 each and every year:
interest = 0.10 × original balance

At the same time, Cleo invests $100 at 5% compound interest.That is, interest
is 5% of the current balance, including previous additions of interest:
interest = 0.05 × current balance

Cleo earns 5% of $100 the first year, giving her $105.The next year she earns
5% of $105, or $5.25,and so on.Write a program that finds how many years it
takes for the value of Cleo’s investment to exceed the value of Daphne’s
investment and then displays the value of both investments at that time. */

#include <iostream>

int main() {

	int year = 0;
	float invest = 100;
	float simple_income = 0;
	float compound_income = 0;

	while (compound_income <= simple_income) {
		year++;
		simple_income = invest * 0.1 + simple_income;
		compound_income = (compound_income + invest) * 0.05 + compound_income;

		std::cout << year << " year: " << std::endl;
		std::cout << "Simple income: " << simple_income << std::endl;
		std::cout << "Compound income: " << compound_income << std::endl;
	}

	return 0;
}
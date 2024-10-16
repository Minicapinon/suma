#include <iostream>

// Declaration of a function
double oper(double var1, double var2);

int main()
{
	// Declaration of two vars
	double var1,var2;

	// Read the first var
	std::cin>>var1;
	std::cout<<'\n';
	
	// Read the second var
	std::cin>>var2;
	std::cout<<'\n';

	// Call the function oper and save the return
	double res = oper(var1,var2);

	// Shows the result
	std::cout<<res;

	return 0;
}

// Function for the sum
double oper(double var1, double var2)
{
	return var1 + var2;
}

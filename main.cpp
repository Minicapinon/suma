#include <iostream>

double oper(double var1, double var2);

int main()
{
	double var1,var2;
	std::cin>>var1;
	std::cout<<'\n';

	std::cin>>var2;
	std::cout<<'\n';

	double res = oper(var1,var2);

	std::cout<<res;

	return 0;
}

double oper(double var1, double var2)
{
	return var1 + var2;
}

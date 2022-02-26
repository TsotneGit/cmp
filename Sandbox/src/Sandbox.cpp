#include <cmp.h>
#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>


int main()
{
	cmp::Complex a(1,2);
	a += cmp::Complex(2, 9);;
	std::cout << a.real() << " " << a.imag() << std::endl;
	std::cout << std::endl;

	//double b;
	//std::cin >> b;
	std::cout << cmp::cos(PI_3) << std::endl;
	// cmp::Complex c(2, 3);
	// cmp::Complex d(1, 4);
	// cmp::Complex g = c + d;
	//std::cout << d.real() << " " << d.imag() << std::endl;

	return 0;
}
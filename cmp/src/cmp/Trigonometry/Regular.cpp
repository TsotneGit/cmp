#include "Regular.h"
#include <cmath>

namespace cmp
{
	double cos(const double& _angle)
	{
		return 1 - (pow(_angle, 2) / (2)) + (pow(_angle, 4) / (24)) - (pow(_angle, 6) / (720)) + (pow(_angle, 8) / (40320)) - (pow(_angle, 10) / (3628800)) + (pow(_angle, 12) / (479001600));
	}

	double sin(const double& _angle)
	{
		return (_angle - pow(_angle, 3) / 6 + pow(_angle, 5) / 120 - pow(_angle, 7) / 5040);
	}
}
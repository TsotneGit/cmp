namespace cmp
{
	double pow(const double& _base, const int& _to)
	{
		double _ans = _base;
		for (int i = 0; i < _to; i++)
		{
			_ans *= _base;
		}
		return _ans;
	}

	int factorial(const int& _x)
	{
		int _ans=1;
		for (int i = 1; i <= _x; i++)
		{
			_ans *= i;
		}
		return _ans;
	}
}
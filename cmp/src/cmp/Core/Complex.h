#pragma once
#include "../Core.h"

namespace cmp
{
	class CMP_API Complex
	{
	public:
		Complex();
		Complex(int _real);
		Complex(int _real, int _imag);
		~Complex();

		int imag();
		int real();

		void imag(int _new_imag);
		void real(int _new_real);

		// friend Complex operator+(const Complex& _first_operand, const Complex& _second_operand);
		void operator+=(Complex& _second_operand);
		void operator+=(Complex&& _second_operand);
	private:
		int m_Imag, m_Real;
	};
}



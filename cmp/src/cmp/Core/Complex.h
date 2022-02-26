#pragma once
#include "../Core.h"

namespace cmp
{
	class CMP_API Complex
	{
	public:
		Complex();
		Complex(const int& _real);
		Complex(const int& _real, const int& _imag);
		~Complex();

		int imag();
		int real();

		void imag(const int& _new_imag);
		void real(const int& _new_real);

		// friend Complex operator+(const Complex& _first_operand, const Complex& _second_operand);
		void operator+=(Complex& _second_operand);
		void operator+=(Complex&& _second_operand);
	private:
		int m_Imag, m_Real;
	};
}



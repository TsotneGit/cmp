#include "Complex.h"

namespace cmp
{
	Complex::Complex()
	{
		m_Imag = 0;
		m_Real = 0;
	}


	Complex::Complex(int _real)
	{
		m_Real = _real;
		m_Imag = 0;
	}


	Complex::Complex(int _real, int _imag)
	{
		m_Real = _real;
		m_Imag = _imag;
	}


	Complex::~Complex()
	{
	}


	int Complex::imag()
	{
		return m_Imag;
	}


	int Complex::real()
	{
		return m_Real;
	}


	void Complex::imag(int _new_imag)
	{
		m_Imag = _new_imag;
	}


	void Complex::real(int _new_real)
	{
		m_Real = _new_real;
	}


	void Complex::operator+=(Complex& _second_operand)
	{
		m_Real += _second_operand.real();
		m_Imag += _second_operand.imag();
	}


	void Complex::operator+=(Complex&& _second_operand)
	{
		m_Real += _second_operand.real();
		m_Imag += _second_operand.imag();
	}

	/*
	Complex operator+(const Complex& _first_operand, const Complex& _second_operand)
	{
		return Complex(_first_operand.m_Real + _second_operand.m_Real, _first_operand.m_Imag + _second_operand.m_Imag);
	}
	*/
	

}
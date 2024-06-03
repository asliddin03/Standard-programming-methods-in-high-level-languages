#pragma once

#include <cmath>
#include <iostream>

class Complex {
 public:
  explicit Complex(double real_ = 0.0, double imag_ = 0.0);

  // Addition operators.
  Complex& operator+=(const Complex& complex);
  Complex operator+(const Complex& complex) const;

  // Substraction operators.
  Complex& operator-=(const Complex& complex);
  Complex operator-(const Complex& complex) const;

  // Multiplication operators.
  Complex& operator*=(const Complex& complex);
  Complex operator*(const Complex& complex) const;

  // Division operators.
  Complex& operator/=(const Complex& complex);
  Complex operator/(const Complex& complex) const;

  // Trigonometric.
  double abs();

  double argument();

 private:
  double real_;
  double imag_;
};
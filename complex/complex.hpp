#pragma once

#include <iostream>

class Complex {
 public:
  explicit Complex(double real_, double imag_);
  Complex& operator+=(const Complex& complex);
 private:
  double real_ = 0.0;
  double imag_ = 0.0;
};
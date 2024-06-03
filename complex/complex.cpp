#include "complex.hpp"

Complex::Complex(double real_, double imag_) : real_(real_), imag_(imag_) {}

Complex &Complex::operator+=(const Complex &complex) {
  real_ += complex.real_;
  imag_ += complex.imag_;
}

Complex Complex::operator+(const Complex &complex) const {
  Complex result{ *this };
  result += complex;
  return result;
}

Complex &Complex::operator-=(const Complex &complex) {
  real_ -= complex.real_;
  imag_ -= complex.imag_;
}

Complex Complex::operator-(const Complex &complex) const {
  Complex result{ *this };
  result -= complex;
  return result;
}

Complex &Complex::operator*=(const Complex &complex) {
  const double currReal{ real_ * complex.real_ - imag_ * complex.imag_ };
  const double currImag{ imag_ * complex.real_ + real_ * complex.imag_ };
  real_ = currReal;
  imag_ = currImag;
  return *this;
}

Complex Complex::operator*(const Complex &complex) const {
  Complex result{ *this };
  result *= complex;
  return result;
}

Complex &Complex::operator/=(const Complex &complex) {
  const double currReal{ (real_ * complex.real_ + imag_ * complex.imag_) / (complex.real_ * complex.real_ + complex.imag_ * complex.imag_) };
  const double currImag{ (imag_ * complex.real_ - real_ * complex.imag_) / (complex.real_ * complex.real_ + complex.imag_ * complex.imag_) };
  real_ = currReal;
  imag_ = currImag;
  return *this;
}

Complex Complex::operator/(const Complex &complex) const {
  Complex result{ *this };
  result /= complex;
  return result;
}

double Complex::abs() {
  return std::sqrt(real_ * real_ + imag_ * imag_);
}

double Complex::argument() {
  return atan2(imag_, real_);
}

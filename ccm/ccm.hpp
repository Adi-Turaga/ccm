#pragma once

#include <cmath>

template<typename T>
struct basic_math 
{
    constexpr T pow(const T& num) const { return num * num; }
    constexpr T pow(const T& base, const T& exponent) const { return std::pow(base, exponent); }
    constexpr T expm1(const T& number) const { return std::expm1(number); }
    constexpr T cube(const T& num) const { return num * num * num; }
    constexpr T sqrt(const T& number) const { return std::sqrt(number); }
    constexpr T cbrt(const T& number) const { return std::cbrt(number); }
    constexpr T root(const T& number) const { return std::sqrt(number); }
    constexpr T log(const T& number) const { return std::log(number); }
    constexpr T log10(const T& number) const { return std::log10(number); }
    constexpr T log1p(const T& number) const { return std::log1p(number); }

    constexpr int trunc(const double& number) const { return (int)number; }
    constexpr int floor(const double& number) const { return trunc(number); }
    constexpr int ceil(const double& number) const { return trunc(number + 1); }
    constexpr int round(const double& number) const { return std::round(number); }
    constexpr int abs(const T& number) const { return std::abs(number); }
    constexpr int fabs(const T& number) const { return std::fabs(number); }
    constexpr T min(const T& num1, const T& num2) const { return std::fmin(num1, num2); }
    constexpr T max(const T& num1, const T& num2) const { return std::fmax(num1, num2); }

    constexpr bool isfinite(const T& number) const { return std::isfinite(number); }
    constexpr bool isinf(const T& number) const { return std::isinf(number); }
    constexpr bool isnan(const T& number) const { return std::isnan(number); }
    
    constexpr T sin(const T& angle) const { return std::sin(angle); }
    constexpr T cos(const T& angle) const { return std::cos(angle); }
    constexpr T tan(const T& angle) const { return std::tan(angle); }
    constexpr T asin(const T& angle) const { return std::asin(angle); }
    constexpr T acos(const T& angle) const { return std::acos(angle); }
    constexpr T atan(const T& angle) const { return std::atan(angle); }
    
    constexpr T sinh(const T& angle) const { return std::sinh(angle); }
    constexpr T cosh(const T& angle) const { return std::cosh(angle); }
    constexpr T tanh(const T& angle) const { return std::tanh(angle); }
    constexpr T asinh(const T& angle) const { return std::asinh(angle); }
    constexpr T acosh(const T& angle) const { return std::acosh(angle); }
    constexpr T atanh(const T& angle) const { return std::atanh(angle); }
};

typedef basic_math<double> mbase;
namespace math { mbase ccm; }
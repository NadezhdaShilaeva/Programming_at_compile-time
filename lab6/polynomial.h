#pragma once

#include <iostream>

template<int DEG, int X, int COEFF_DEG, int... OTHER_COEFFS>
struct polynomial
{
    static const int x_deg = polynomial<DEG - 1, X, OTHER_COEFFS...>::x_deg * X;
    static const int value = polynomial<DEG - 1, X, OTHER_COEFFS...>::value + COEFF_DEG * x_deg;
    static const int coeff_deg = COEFF_DEG;
};

template<int X, int COEFF_0>
struct polynomial<0, X, COEFF_0>
{
    static const int x_deg = 1;
    static const int value = COEFF_0;
    static const int coeff_deg = COEFF_0;
};

template<int DEG, int X, int COEFF_DEG, int... OTHER_COEFFS>
std::ostream& operator<<(std::ostream& stream, const polynomial<DEG, X, COEFF_DEG, OTHER_COEFFS...>& value)
{
    if (COEFF_DEG > 0)
    {
        stream << COEFF_DEG << "x^" << DEG;
    }
    if (COEFF_DEG < 0)
    {
        stream << -COEFF_DEG << "x^" << DEG;
    }
    polynomial<DEG - 1, X, OTHER_COEFFS...> poly;
    if (poly.coeff_deg > 0)
    {
        std::cout << " + ";
    }
    if (poly.coeff_deg < 0)
    {
        std::cout << " - ";
    }
    stream << poly;
    return stream;
}

template<int X, int COEFF_0>
std::ostream& operator<<(std::ostream& stream, const polynomial<0, X, COEFF_0>& value)
{
    if (COEFF_0 > 0)
    {
        stream << COEFF_0;
    }
    if (COEFF_0 < 0)
    {
        stream << -COEFF_0;
    }
    return stream;
}
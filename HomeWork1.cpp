#include "HomeWork1.h"
#include <exception>

std::vector<double> HomeWork1::CalcSquareRoot(double a, double b, double c, double eps)
{
	std::vector<double> result;

	if (fabs(a) < eps)
		throw std::runtime_error("a equal is zero");
	if (std::isinf(a) || std::isnan(a))
		throw std::runtime_error("a is inf or nan");
	if (std::isinf(b) || std::isnan(b))
		throw std::runtime_error("b is inf or nan");
	if (std::isinf(c) || std::isnan(c))
		throw std::runtime_error("c is inf or nan");

	double D = b * b - 4 * a*c;

	if (fabs(D) <= eps)
	{
		result.reserve(2);
		double root = -b / (2 * a);
		result.push_back(root);
		result.push_back(root);
	}
	else if (D > eps)
	{
		result.reserve(2);
		result.push_back((-b + sqrt(D)) / (2 * a));
		result.push_back((-b - sqrt(D)) / (2 * a));
	}

	return result;
}

#include <gtest/gtest.h>
#include "HomeWork1.h"

// коэффициент а равен нулю
TEST(SquareRootTest, A_EQUAL_ZERO)
{
	ASSERT_THROW(
		{
			HomeWork1 hw1;
		hw1.CalcSquareRoot(0, 1, 1);
		},
		std::runtime_error);
}
// дискриминант меньше нуля
TEST(SquareRootTest, DISCRIMINANT_LESS_ZERO)
{
	HomeWork1 hw1;
	std::vector<double> roots = hw1.CalcSquareRoot(1.001, 2, 1);
	
	ASSERT_EQ(roots.size(), 0);
}
// дискриминант равен нулю
TEST(SquareRootTest, DISCRIMINANT_EQUAL_ZERO)
{
	HomeWork1 hw1;
	std::vector<double> roots = hw1.CalcSquareRoot(1, 2, 1);

	ASSERT_EQ(roots.size(), 2);
	ASSERT_EQ(roots[0], -1);
	ASSERT_EQ(roots[1], -1);
}
// дискриминант больше нуля
TEST(SquareRootTest, DISCRIMINANT_GREATER_ZERO)
{
	HomeWork1 hw1;
	std::vector<double> roots = hw1.CalcSquareRoot(1, 5, 6);

	ASSERT_EQ(roots.size(), 2);
	ASSERT_EQ(roots[0], -2);
	ASSERT_EQ(roots[1], -3);
}
// a==INF
TEST(SquareRootTest, A_EQUAL_INF)
{
	ASSERT_THROW(
		{
			HomeWork1 hw1;
			hw1.CalcSquareRoot(INFINITY, 1, 1);
		},
		std::runtime_error);
}
// a==NAN
TEST(SquareRootTest, A_EQUAL_NAN)
{
	ASSERT_THROW(
		{
			HomeWork1 hw1;
			hw1.CalcSquareRoot(NAN, 1, 1);
		},
		std::runtime_error);
}
// b==INF
TEST(SquareRootTest, B_EQUAL_INF)
{
	ASSERT_THROW(
		{
			HomeWork1 hw1;
			hw1.CalcSquareRoot(1, INFINITY, 1);
		},
		std::runtime_error);
}
// b==NAN
TEST(SquareRootTest, B_EQUAL_NAN)
{
	ASSERT_THROW(
		{
			HomeWork1 hw1;
			hw1.CalcSquareRoot(1, NAN, 1);
		},
		std::runtime_error);
}
// c==INF
TEST(SquareRootTest, C_EQUAL_INF)
{
	ASSERT_THROW(
		{
			HomeWork1 hw1;
			hw1.CalcSquareRoot(1, 1, INFINITY);
		},
		std::runtime_error);
}
// c==NAN
TEST(SquareRootTest, C_EQUAL_NAN)
{
	ASSERT_THROW(
		{
			HomeWork1 hw1;
			hw1.CalcSquareRoot(1, 1, NAN);
		},
		std::runtime_error);
}
#include "pch.h"
#include "../Basic/Calculator.hpp"

TEST(SumTest, Test2Plus2Equals4)
{
	Calculator calc;

	EXPECT_EQ(calc.sum(2, 2), 4);

}


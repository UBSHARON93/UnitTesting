#include "pch.h"
#include "../GoogleTest/SquareTheNr.cpp"

//The necessary test cases for a squaring function will be :

TEST(SquareTheNr, PositiveValues) 
{
	ASSERT_EQ(36, SquareTheNr(6));
	ASSERT_EQ(81, SquareTheNr(9));
	ASSERT_EQ(25, SquareTheNr(5));
	ASSERT_EQ(100, SquareTheNr(10));
}

TEST(SquareTheNr, NegativeValues) 
{
	ASSERT_EQ(36, SquareTheNr(-6));
	ASSERT_EQ(81, SquareTheNr(-9));
	ASSERT_EQ(25, SquareTheNr(-5));
	ASSERT_EQ(100, SquareTheNr(-10));
}

TEST(SquareTheNr, ZeroSquare)
{
	ASSERT_EQ(0, SquareTheNr(0));
}

// Test fails obviously as the function only processes int values
TEST(SquareTheNr, DecimalValues)
{
	ASSERT_EQ(1.21, SquareTheNr(1.1));
}
// example000_google.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "gtest/gtest.h"

#include "../example000/simple_calc.h"

TEST(SquareRootTest, PositiveNos) {
	simple_calc sc;
	EXPECT_EQ(3, sc.addInts(1,3));
}

int main(int argc, char* argv[])
{
	::testing::InitGoogleTest(&argc, argv);

	RUN_ALL_TESTS();
    return 0;
}


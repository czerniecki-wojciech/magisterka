
#define BOOST_TEST_MAIN
#include <boost/test/included/unit_test.hpp>

#include "../example000/simple_calc.h"

BOOST_AUTO_TEST_CASE(test1)
{
	simple_calc sc;
	BOOST_TEST(3, sc.addInts(1,2));
}

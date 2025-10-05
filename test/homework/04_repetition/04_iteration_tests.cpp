#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

int get_factorial(int n) {
	int result = 1;
	for(int i = 1; i <= n; ++i) {
		result *= i;
	}
	return result;
}

TEST_CASE("Test get_factorial function") {
	REQUIRE(get_factorial(0) == 1);
	REQUIRE(get_factorial(1) == 1);
	REQUIRE(get_factorial(5) == 120);
	REQUIRE(get_factorial(7) == 5040);
}
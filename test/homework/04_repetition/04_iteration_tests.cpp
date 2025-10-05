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
TEST_CASE("Test get_factorial with range-based loop") {
	int expected[] = {1, 1, 2, 6, 24, 120};
	int i = 0;
	for (int n : {0, 1, 2, 3, 4, 5}) {
		REQUIRE(get_factorial(n) == expected[i]);
		++i;
	}
}
int sum_odd_numbers(int n) {
	int sum = 0;
	int i = 1;
	while (i <= n) {
		if (i % 2 != 0) {
			sum += i;
		}
		++i;
	}
	return sum;
}

TEST_CASE("Test sum_odd_numbers function") {
	REQUIRE(sum_odd_numbers(1) == 1);
	REQUIRE(sum_odd_numbers(5) == 9);   // 1 + 3 + 5 = 9
	REQUIRE(sum_odd_numbers(10) == 25); // 1 + 3 + 5 + 7 + 9 = 25
}
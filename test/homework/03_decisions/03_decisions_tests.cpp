#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "if_else_if.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Test get_letter_grade_using_if") {
	REQUIRE(get_letter_grade_using_if(95) == "A");
	REQUIRE(get_letter_grade_using_if(85) == "B");
	REQUIRE(get_letter_grade_using_if(75) == "C");
	REQUIRE(get_letter_grade_using_if(65) == "D");
	REQUIRE(get_letter_grade_using_if(50) == "F");
	REQUIRE(get_letter_grade_using_if(-10) == "Invalid grade");
	REQUIRE(get_letter_grade_using_if(110) == "Invalid grade");
}#include <string>
using std::string;

TEST_CASE("Test get_letter_grade_using_switch") {
	REQUIRE(get_letter_grade_using_switch(95) == "A");
	REQUIRE(get_letter_grade_using_switch(85) == "B");
	REQUIRE(get_letter_grade_using_switch(75) == "C");
	REQUIRE(get_letter_grade_using_switch(65) == "D");
	REQUIRE(get_letter_grade_using_switch(50) == "F");
	REQUIRE(get_letter_grade_using_switch(-10) == "Invalid grade");
	REQUIRE(get_letter_grade_using_switch(110) == "Invalid grade");
}
#include "switch.h"
string get_letter_grade_using_switch(int grade)
{
	if (grade < 0 || grade > 100)
		return "Invalid grade";

	switch (grade / 10)
	{
		case 10:
		case 9:
			return "A";
			break;
		case 8:
			return "B";
			break;
		case 7:
			return "C";
			break;
		case 6:
			return "D";
			break;
		default:
			return "F";
			break;
	}
}

TEST_CASE("test get letter grade using break") {
	REQUIRE(get_letter_grade_using_switch(95) == "A");
	REQUIRE(get_letter_grade_using_switch(85) == "B");
	REQUIRE(get_letter_grade_using_switch(75) == "C");
	REQUIRE(get_letter_grade_using_switch(65) == "D");
	REQUIRE(get_letter_grade_using_switch(50) == "F");
	REQUIRE(get_letter_grade_using_switch(-10) == "Invalid grade");
	REQUIRE(get_letter_grade_using_switch(110) == "Invalid grade");
}
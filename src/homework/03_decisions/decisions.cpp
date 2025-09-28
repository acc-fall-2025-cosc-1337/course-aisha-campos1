//write include statement for decisions header
#include "if_else_if.h"
#include "switch.h"

using std::string;


//Write code for function(s) code here
string get_letter_grade_using_if(int grade)
{
    //Write code for function(s) code here
    if (grade >= 90 && grade <= 100)
    {
        return "A";
    }
    else if (grade >= 80 && grade <= 89)
    {
        return "B";
    }
    else if (grade >= 70 && grade <= 79)
    {
        return "C";
    }
    else if (grade >= 60 && grade <= 69)
    {
        return "D";
    }
    else if (grade >= 0 && grade <= 59)
    {
        return "F";
    }
    else
    {
        return "Invalid grade";
    }
}

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
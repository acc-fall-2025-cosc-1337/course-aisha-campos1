//add include statements
#include "func.h"
#include <string>
#include <iostream>

//add function code here
using std::cout;
using std::string;
void string_value_param(std::string lang)
{
    for (auto ch: lang)
        ch = toupper(ch);
    cout << lang << "\n";
}
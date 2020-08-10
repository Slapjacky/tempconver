#include <iostream>

#include "conv.h"

void celsiusConv()
{
    double celsUnit;

    std::cout << "Enter how much celsius you'd like to convert: " << std::endl;
    std::cin >> celsUnit;

    double fahrenUnit = (celsUnit * 9) / 5 + 32;

    std::cout << "Converted value from Celsius to Fahrenheit: " << std::endl;
    std::cout << fahrenUnit << "°F" << std::endl;
}

void fahrenConv()
{
    double fahrenUnit;

    std::cout << "Enter how much fahrenheit you'd like to convert: " << std::endl;
    std::cin >> fahrenUnit;

    double celsUnit = (fahrenUnit - 32) * 5 / 9;

    std::cout << "Converted value from Fahrenheit to Celsius: " << std::endl;
    std::cout << celsUnit << "C°" << std::endl;
}

void quitProgram()
{
    std::cout << "Quitting program now..." << std::endl;
}
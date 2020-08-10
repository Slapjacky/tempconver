#include <iostream>

int main()
{

    std::cout << "[Celsius <-> Fahrenheit converter]\n" << std::endl;
    std::cout << "Choose an option from below: " << std::endl;
    std::cout << "< 1. C° to °F >" << std::endl;
    std::cout << "< 2. °F to C° >" << std::endl;

    std::string menuChoice;
    std::cin >> menuChoice;
    
    double celsUnit;
    double fahrenUnit;

        if (menuChoice == "1")
        {
            std::cout << "Enter how much celsius you'd like to convert: " << std::endl;
            std::cin >> celsUnit;

            double fahrenUnit = (celsUnit * 9) / 5 + 32;

            std::cout << "Converted value from Celsius to Fahrenheit: " << std::endl;
            std::cout << fahrenUnit << "°F" << std::endl;
        }
        else if (menuChoice == "2")
        {
            std::cout << "Enter how much fahrenheit you'd like to convert: " << std::endl;
            std::cin >> fahrenUnit;

            double celsUnit = (fahrenUnit - 32) * 5 / 9;

            std::cout << "Converted value from Fahrenheit to Celsius: " << std::endl;
            std::cout << celsUnit << "C°" << std::endl;
        }
        else
        {
            std::cout << "Please choose a valid option!" << std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Basically fool-proofs the input when in the menu
        }
    return 0;
}






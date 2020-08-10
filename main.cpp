#include <iostream>

#include "conv.h"

using uint = unsigned int;

int main()
{
    std::cout << "[Celsius <-> Fahrenheit converter] \n" << std::endl;
    bool isConverting = true;

    std::cout << "Please choose an option from below:" << std::endl;
    std::cout << "< 1. Celsius to Fahrenheit >" << std::endl;
    std::cout << "< 2. Fahrenheit to Celsius >" << std::endl;
    std::cout << "< 3. Quit program >" << std::endl;

    while (isConverting == true)
    {
        std::string menuChoice;
        
        std::cin >> menuChoice;

        if (menuChoice == "1")
        {
            //Celsius to fahrenheit
            std::cout << "\033[2J\033[u";
            isConverting = false;
            celsiusConv();
        }
        else if (menuChoice == "2")
        {
            //Fahrenheit to celsius
            std::cout << "\033[2J\033[u";
            isConverting = false;
            fahrenConv();
        }
        else if (menuChoice == "3")
        {
            //Quit program
            std::cout << "\033[2J\033[u";
            isConverting = false;
            quitProgram();
        }
        else
        {
            std::cout << "Please choose a valid option!" << std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Basically fool-proofs the input when in the menu
        }
    }
    return 0;
}

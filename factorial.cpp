// Copyright (c) 2022 Ioana Marinescu All rights reserved.
// Created By: Ioana Marinescu
//
// Date: Nov. 11, 2022
// a program that calculates the factorial


#include <iostream>

int main() {
    // variables
    std::string userNumString;
    int userNumInt;
    float userNumFloat;
    int counter = 1;
    int numberFactorial = 1;

    // get user input
    std::cout << "Enter any whole number: ";
    std::cin >> userNumString;

    // try catch
    try {
        userNumInt = stoi(userNumString);
        userNumFloat = stof(userNumString);

        // checks if user num is a float
        if (userNumFloat != userNumInt) {
            std::cout << "Input invalid! Please enter a WHOLE number!"
            << std::endl;

        // checks if user num is not a whole number
        } else if (userNumInt < 0) {
            std::cout << "Input invalid! Please enter a WHOLE number!"
            << std::endl;

        // user input is valid
        } else {
            // calculates the factorial
            do {
                numberFactorial *= counter;
                counter++;
            } while (counter <= userNumInt);

            // displays final product
            std::cout << userNumInt << "! = " << numberFactorial << std::endl;
        }

    // if any errors occur
    } catch (std::invalid_argument) {
        std::cout << "Input invalid! Please enter a WHOLE number!"
        << std::endl;
    }

    // final message
    std::cout << "Thank you for using this program!" << std::endl;
}

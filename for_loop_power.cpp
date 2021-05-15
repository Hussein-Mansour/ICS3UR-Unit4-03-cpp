// Copyright (c) 2021 Hussein Mansour All rights reserved
//
// Created by: Hussein Mansour
// Created on: Sat/May15/2021
// This program uses a for loop

#include <iostream>

int main() {
    // this function accepts a positive integer
    // calculates the square of each integer from 0 to the user input
    std::string  positive;
    int positiveInt;
    int power;
    int loopCounter;

    // input
    std::cout << "Enter an integer >= 0:";
    std::cin >> positive;

    // process & output
    try {
        positiveInt = std::stoi(positive);

        if (positiveInt < 0) {
            std::cout << "you did not enter a positive number." << std::endl;
        } else if (positiveInt == 0) {
            std::cout << "0² = 0" << std::endl;
        } else {
             for (loopCounter = 0;
                    loopCounter < positiveInt + 1; loopCounter++) {
                power = loopCounter * loopCounter;
                std::cout << loopCounter << "² = " << power << std::endl;
             }
        }
    } catch (std::invalid_argument) {
        std::cout << "You did not enter a integer." << std::endl;
    }

std::cout << "\n\nDone." << std::endl;
}

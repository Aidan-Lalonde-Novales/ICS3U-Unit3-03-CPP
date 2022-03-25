// Copyright (c) 2022 Aidan Lalonde-Novales All rights reserved
//
// Created by Aidan Lalonde-Novales
// Created on 2022-03-07
// This is a program that lets the user guess a number
// between 0-9 and tell them if they got it right.

#include <iostream>
#include <iomanip>

int main() {
    // This function gets a guess from a user and tells them
    // if they got the number between 0-9 correct
    const float RANDOM = 1;

    float guessedNumber;

    // Input
    std::cout << "Enter a number between 0 and 9: ";
    std::cin >> guessedNumber;

    // Process & Output
    if (guessedNumber == RANDOM) {
        std::cout << "You Guessed Correctly!" << std::endl;
        std::cout << std::endl;
        std::cout << "Done." << std::endl;
    } else {
        std::cout << "You Guessed Incorrectly." << std::endl;
        std::cout << std::endl;
        std::cout << "Done." << std::endl;
    }
}

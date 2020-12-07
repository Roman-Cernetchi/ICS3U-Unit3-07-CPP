// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2019
// This program tells you if you're old enough

#include <iostream>
#include <string>
#include <cmath>

main() {
    // this function checks if you are old enough
    std::string age_string;
    int participants_age;

    // input
    std::cout << "Enter your age: ";
    std::cin >> age_string;
    std::cout << "" << std::endl;

    // process & output
    try {
        participants_age = std::stoi(age_string);

        if (participants_age >= 25 && participants_age <= 50) {
            std::cout << "You are old enough" << std::endl;
        } else {
            // output
            std::cout << "You are not old enough " << std::endl;
        }
    } catch (std::invalid_argument) {
        // output
        std::cout << "That was not a valid integer" << std::endl;
    }
}

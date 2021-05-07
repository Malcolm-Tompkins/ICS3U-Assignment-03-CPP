// Copyright (c) 2021 Malcolm Tompkins All rights reserved
//
// Created by Malcolm Tompkins
// Created on May 7, 2021
// This file calculates solutions for quadratic equations


#include <math.h>
// Learned from https://www.thecrazyprogrammer.com/2011/03/c-program-to-calculate-square-root-of.html
#include <iomanip>
#include <iostream>



main() {
    // Function that calculates and outputs solutions
double var_a, var_b, var_c;
double discriminant , solution1, solution2, imaginary_solution;

    std::cout << "Welcome to the quadratic equation calculator!\n";
    std::cout << "Simply input your three variables.";
    // User input
    std::cout << "\nInput your a value: ";
    std::cin >> var_a;
    std::cout << "Input your b value: ";
    std::cin >> var_b;
    std::cout << "Input your c value: ";
    std::cin >> var_c;
    // Process
    discriminant = (var_b * var_b) - (4 * var_a * var_c);
    // Output
    std::cout << "The discriminant is: ";
    std::cout << discriminant;


    if (discriminant > 0) {
        // Process
        solution1 = (-var_b + sqrt(discriminant) / (2 * var_a));
        solution2 = (-var_b - sqrt(discriminant) / (2 * var_a));
        // Output
        std::cout << "\nFirst solution: ";
        std::cout << std::fixed << std::setprecision(2)
        << std::setfill('0') << solution1;
        std::cout << "\nSecond solution: ";
        std::cout << solution2;
    } else if (discriminant == 0) {
        // Process
        solution1 = solution2 = -var_b / (2 * var_a);
        // Output
        std::cout << "\nFirst solution: ";
        std::cout << std::fixed << std::setprecision(2)
        << std::setfill('0') << solution1;
        std::cout << "\nSecond solution: ";
        std::cout << solution2;
    } else {
        // Process
        solution1 = solution2 = -var_b / (2 * var_a);
        imaginary_solution = sqrt(-discriminant) / (2 * var_a);
        // Output
        std::cout << "\nFirst solution: ";
        std::cout << solution1;
        std::cout << " + ";
        std::cout << std::fixed << std::setprecision(2) << std::setfill('0')
        << imaginary_solution;
        std::cout << "\nSecond solution: ";
        std::cout << solution2;
        std::cout << " + ";
        std::cout << imaginary_solution;
    }
}

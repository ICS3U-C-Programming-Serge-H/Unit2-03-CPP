// Copyright (c) 2025 Serge Hamouche All rights reserved.
// Created by: Serge Hamouche
// Date: March 4, 2025
// It then calculates and displays the total cost of the pizza with tax
#include <iostream>

int main() {

    const float HST = 0.13;
    const float LABOUR_COST = 2.00;
    const float RENTAL_COST = 2.25;
    const float INGRED_COST = 1.50;
    float pizzaDiameter;
    // Assign value to pizza-Diameter
    std::cout << "Diameter of pizza: ";
    std::cin >> pizzaDiameter;



    float subtotal = LABOUR_COST + RENTAL_COST + INGRED_COST * 1.5;
    float tax = subtotal * HST;
    float total = subtotal + tax;

    std::cout << "The total cost of yur pizza is: $" << total;
    std::cout << "" << std::endl;
}

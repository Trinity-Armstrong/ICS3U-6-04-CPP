// Copyright (c) 2019 Trinity Armstrong All rights reserved.
//
// Created by: Trinity Armstrong
// Created on: December 2019
// This program identifies the largest number in a list

#include <time.h>
#include <iostream>


template <int rows, int cols>
float calculate(float (&passedIn2DList)[rows][cols]) {
    // This function calculatest the average of all the elements in a 2D array

    float total = 0;
    float total_average = 0;
    float divider = 0;

    for (size_t rowElement = 0; rowElement < rows; ++rowElement) {
        for (size_t columnElement = 0; columnElement < cols; ++columnElement) {
            total += passedIn2DList[rowElement][columnElement];
            divider += 1; }
    }

    total_average = total / divider;
    return total_average;
}


int main() {
    // this function uses a 2D array

    float aSingleRandomNumber = 0;
    const int rows = 2;
    const int columns = 2;
    float randomArray[rows][columns];
    float average;

    unsigned int seed = time(NULL);

    for (int rowElement = 0; rowElement < rows; rowElement++) {
        for (int columnElement = 0; columnElement < columns; columnElement++) {
            aSingleRandomNumber = rand_r(&seed) % 50;
            randomArray[rowElement][columnElement] = aSingleRandomNumber;
            std::cout << aSingleRandomNumber << ", ";
        }
        std::cout << std::endl;
    }

    average = calculate(randomArray);
    std::cout << "The average of all these numbers is: " << average
              << std::endl;
}

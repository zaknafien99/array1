// array1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// example showing the use of class array<>

#include <array>
#include <algorithm>
#include <functional>
#include <numeric>
#include <iostream>
#include "..\..\add1\add1\print.h"
using namespace std;


int main()
{
    // create array with 10 ints
    array<int, 10> a = { 11,22,33,44 };

    PRINT_ELEMENTS(a);

    // modify last two elements
    a.back() = 9999999;
    a[a.size() - 2] = 42;
    PRINT_ELEMENTS(a);

    // process sum of all elements
    cout << "sum: "
        << accumulate(a.begin(), a.end(), 0)
        << endl;

    // negate all elements
    transform(a.begin(), a.end(),   //source
        a.begin(),                  // destination
        negate<int>());             // operation
    PRINT_ELEMENTS(a);


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

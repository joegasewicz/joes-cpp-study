/**
* Created on 15/05/2024.
* Contact pymailio@gmail.com
*
* Anyone is free to copy, modify, publish, use, compile, sell, or
* distribute this software, either in source code form or as a compiled
* binary, for any purpose, commercial or non-commercial, and by any
* means. THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
* EXPRESS OR IMPLIED, IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
* OTHER LIABILITY.
*/
#include <iostream>
#include "section-6.h"

using namespace std;

void Section6::declaringAndInitializingVariables(void)
{
    int age ; // uninitialized

    cout << "age: " << age << endl; // age could be anything...

    /* Initializing variables */
    int age1 = 21; // C like initialization
    cout << "age1: " << age1 << endl;

    int age2 = (21); //  Constructor initialization

    int age3 = {21}; // C++11 list initialization syntax

    int room_width {0}; // initialize to 0
    int room_length {0};
    cout << "Enter the width of the room: ";
    cin >> room_width;

    cout << "Enter the length of the room ";
    cin >> room_length;
    cout << "The area of the room is " << room_width * room_length << " square feet" << endl;

}

int age1 {19}; // global variable

void Section6::globalVariables()
{
    // variables declared outside of functions are called "global variables"
    // global variables are automatically initialized to zero

    int age {18}; // local to this method
    cout << age << endl;

    cout << age1 << endl; // 19

    int age1 {20};
    cout << age1 << endl; // 20
}

/**
 * Fundamental data types implemented directly in C++
 *
 * - Character types
 * - Integer types
 *      - signed & unsigned
 * - Floating-point types
 * - Boolean type
 *
 * Size & precision is often compiler dependent
 * - #include <climits>
 *
 * Character Types
 * ===============
 * - Used to represent single characters
 * - Wider types are used to represent wider character sets
 *
 * - char 8 bits
 * - char16_t 16 bits
 * - char32_t 32 bits
 * wchar_t can represent the largest character set
 *
 * Integer Types
 * =============
 * By default integers are signed
 *
 * - signed short int       (at least 16 bits)
 * - signed int             (at least 16 bits)
 * - signed long int        (at least 32 bits)
 * - signed long long int   (at least 64 bits)
 * - unsigned short int       (at least 16 bits)
 * - unsigned int             (at least 16 bits)
 * - unsigned long int        (at least 32 bits)
 * - unsigned long long int   (at least 64 bits)
 *
 * Floating-point Types
 * ====================
 * - float          (7 decimal digits)
 * - double         (15 decimal digits)
 * - long double    (19 decimal digits)
 *
 * Boolean Type
 * ============
 * bool             (usually 8 bits)
 */
void Section6::cppBuiltInPrimitiveTypes()
{
    // TODO continue...
}
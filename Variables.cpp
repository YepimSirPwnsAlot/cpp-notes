// Now we will talk about variables, variables are important because they can store values. The variable could be a: string, number, boolean, or other C++ data types. An example of a variable would be:
/* int myNumber = 10; double pi = 3.14; 
   float myPrice = 9.99f;
   char myLetter = 'A';
   bool isTrue = true;
   std::string myName = "John"; 
*/

// Float is also important because it is essential for handling decimal precision in functional programming, data analysis, and mathematical modeling. While integers are limited to whole numbers, floats allow functions to return exact fractional results (e.g.,) 

// If you really want to use a variable then you would type:
#include <iostream>
#include <string> // Required to use std::string
using namespace std; // Also required because we have std::cout in this block of code.

int main() {
    // 1. Integers and Decimals
    int myNumber = 10; 
    double pi = 3.14;
    float myPrice = 19.99f;

    // 2. Characters (Single quotes)
    char myLetter = 'A';

    // 3. Booleans (True/False)
    bool isTrue = true;

    // 4. Strings (Double quotes)
    std::string myName = "John";

    // Let's actually see the output!
    std::cout << myName << " says the price is " << myPrice << std::endl;

    return 0;
}

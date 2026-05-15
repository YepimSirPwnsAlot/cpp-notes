// Since you cannot exactly use "wait()" in C++ as you would do in lua or other coding languages with a wait function, you would need to use std::this_thread::sleep_for(std::chrono:seconds(1));
// This instead of making it wait freezes the program basically making a wait function without actually having one.
// For more context you can change the 1 to any number you want, heres a list of what you can change them too: hours, minutes, seconds, miliseconds, microseconds, nanoseconds
// Also if you want to use std::this_thread::sleep_for(std::chrono:seconds(1)); in your script then you use #include <iostream> #include <chrono>, #include <thread> and #inclue <string>, heres an example:

#include <iostream> // Defualt Library (must ALWAYS start with #include <iostream> otherwise the code will NOT work)
#include <chrono> // A library used for high-precision time manipulation.
#include <thread> // A preprocessor directive that imports the standard thread library.
#include <string> // This is a preprocessor directive that allows you to use the standard string class.
using namespace std; // Must be used in able for the wait thing to work or for the cout to work which cout basically just prints stuff into the system

int main() {
	std::cout << "This is an example!";
	std::this_thread::sleep_for(std::chrono::seconds(2)); // Keep in mind you can use hours, minutes, seconds, miliseconds, microseconds, and nanoseconds.
	std::cout << " Example finished";

	return 0;
}

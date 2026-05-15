// Now we are going to use while true do loops
// While loops are important because they allow code to execute repeatedly as long as a specific condition is met, providing flexibility when the exact number of iterations is unknown beforehand 

#include <iostream>

int main() {
    // Start Of An Infinite loop
    while (true) {
        std::cout << "This loop will run forever unless broken!" << std::endl;
        // You generally need a way to exit the loop, such as a break statement
        // or a return statement under specific conditions.
        // Example:
        /*
        if (some_condition) {
            break; // Exits the loop otherwise it will keep going
        }
        */
    }
    return 0; // This line is never reached in an infinite loop without a break
}

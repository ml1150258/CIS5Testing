//Just a comment
#include <iostream>
#include <limits>

int main(int argc, char **argv) {
    std::cout << "Hello World New" << std::endl;

    int n;
    std::cout << "Please enter a number: ";
    while (!(std::cin >> n)) {
        std::cin.clear(); // clear the error flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard invalid input
        std::cout << "Invalid input. Please enter a number: ";
    }
    std::cout << "You entered: " << n << std::endl;

    std::cout << "Please enter another number: ";
    while (!(std::cin >> n)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Please enter a number: ";
    }
    std::cout << "You entered: " << n << std::endl;

    return 0;
}
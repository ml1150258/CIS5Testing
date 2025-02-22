#include <iostream>
#include <string>

std::string intToRoman(int num) {
    if (num < 0 || num > 3000) {
        return "Invalid input";
    }
    std::string roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    std::string result = "";
    for (int i = 0; i < 13; ++i) {
        while (num >= values[i]) {
            num -= values[i];
            result += roman[i];
        }
    }
    return result;
}

int main() {
    int num;
    std::cout << "Enter an integer (0 to 3000): ";
    std::cin >> num;
    std::string romanNumeral = intToRoman(num);
    std::cout << "Roman numeral: " << romanNumeral << std::endl;
    return 0;
}
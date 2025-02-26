#include <iostream>
#include <string>
#include <vector>

std::string convertToWords(int num);
std::string convertBelowThousand(int num);

int main() {
    int num;
    std::cout << "Enter an integer (0 to 1000000): ";
    std::cin >> num;

    if (num < 0 || num > 1000000) {
        std::cout << "Number out of range!" << std::endl;
    } else {
        std::cout << "The number in words is: " << convertToWords(num) << std::endl;
    }

    return 0;
}

std::string convertToWords(int num) {
    std::vector<std::string> belowTwenty = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    std::vector<std::string> tens = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    std::vector<std::string> thousands = {"", "Thousand", "Million"};

    if (num == 0) return "Zero";
    if (num == 1000000) return "One Million";

    std::string words;
    int i = 0;

    while (num > 0) {
        if (num % 1000 != 0) {
            words = convertBelowThousand(num % 1000) + thousands[i] + " " + words;
        }
        num /= 1000;
        i++;
    }

    return words;
}

std::string convertBelowThousand(int num) {
    std::vector<std::string> belowTwenty = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    std::vector<std::string> tens = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    if (num == 0) return "";
    else if (num < 20) return belowTwenty[num] + " ";
    else if (num < 100) return tens[num / 10] + " " + belowTwenty[num % 10] + " ";
    else return belowTwenty[num / 100] + " Hundred " + convertBelowThousand(num % 100);
}
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>

// Custom comparator function
bool customCompare(const std::string &a, const std::string &b, const std::unordered_map<char, int> &orderMap) {
    int len = std::min(a.length(), b.length());
    for (int i = 0; i < len; ++i) {
        if (orderMap.at(a[i]) != orderMap.at(b[i])) {
            return orderMap.at(a[i]) < orderMap.at(b[i]);
        }
    }
    return a.length() < b.length();
}

int main() {
    // Custom character order
    std::string order = "zyxwvutsrqponmlkjihgfedcba";
    std::unordered_map<char, int> orderMap;
    for (int i = 0; i < order.length(); ++i) {
        orderMap[order[i]] = i;
    }

    // List of words to sort
    std::vector<std::string> words = {"apple", "banana", "grape", "cherry", "date"};

    // Sort words using custom comparator
    std::sort(words.begin(), words.end(), [&orderMap](const std::string &a, const std::string &b) {
        return customCompare(a, b, orderMap);
    });

    // Print sorted words
    for (const std::string &word : words) {
        std::cout << word << " ";
    }
    std::cout << std::endl;

    return 0;
}
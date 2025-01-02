#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void fillArrayWithRandomIntegers(int arr[], int size) {
    srand(time(0)); // Seed for random number generation
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 6 + 5; // Random number between 5 and 10
    }
}

int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int size = 5;
    int arr[size];
    fillArrayWithRandomIntegers(arr, size);
    int sum = sumArray(arr, size);
    std::cout << "Sum of array elements: " << sum << std::endl;
    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> even;
    vector<int> odd;
    int num;

    // Input numbers
    cout << "Enter numbers (enter -1 to stop): ";
    while (cin >> num && num != -1) {
        if (num % 2 == 0) {
            even.push_back(num);
        } else {
            odd.push_back(num);
        }
    }

    // Determine the size of the 2-D array
    int rows = max(even.size(), odd.size());
    int cols = 2;
    int array[rows][cols];

    // Initialize the 2-D array with 0
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            array[i][j] = 0;
        }
    }

    // Fill the 2-D array with even and odd vectors
    for (int i = 0; i < even.size(); ++i) {
        array[i][0] = even[i];
    }
    for (int i = 0; i < odd.size(); ++i) {
        array[i][1] = odd[i];
    }

    // Output the contents of the vectors
    cout << "Even vector: ";
    for (int i = 0; i < even.size(); ++i) {
        cout << even[i] << " ";
    }
    cout << endl;

    cout << "Odd vector: ";
    for (int i = 0; i < odd.size(); ++i) {
        cout << odd[i] << " ";
    }
    cout << endl;

    // Output the contents of the 2-D array
    cout << "2-D array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
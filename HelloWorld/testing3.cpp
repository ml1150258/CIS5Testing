#include <iostream>
using namespace std;

const int ROWS = 3; // Number of rows in the table
const int COLS = 3; // Number of columns in the table

void inputTable(int table[ROWS+1][COLS+1]);
void calculateSums(int table[ROWS+1][COLS+1]);
void printTable(int table[ROWS+1][COLS+1]);

int main() {
    int table[ROWS+1][COLS+1] = {0}; // Initialize table with zeros

    inputTable(table);
    calculateSums(table);
    cout << "Augmented table with sums:" << endl;
    printTable(table);

    return 0;
}

void inputTable(int table[ROWS+1][COLS+1]) {
    cout << "Enter the values for a " << ROWS << "x" << COLS << " table:" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cin >> table[i][j];
        }
    }
}

void calculateSums(int table[ROWS+1][COLS+1]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            table[i][COLS] += table[i][j]; // Sum of rows
            table[ROWS][j] += table[i][j]; // Sum of columns
            table[ROWS][COLS] += table[i][j]; // Grand total
        }
    }
}

void printTable(int table[ROWS+1][COLS+1]) {
    for (int i = 0; i < ROWS + 1; ++i) {
        for (int j = 0; j < COLS + 1; ++j) {
            cout << table[i][j] << "\t";
        }
        cout << endl;
    }
}
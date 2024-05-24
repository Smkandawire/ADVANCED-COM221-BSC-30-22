#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Prompt user input number of rows and columns
     cout << "The value must not exceed 3 \n Enter number of rows: ";
     cin >> rows;
    while (rows < 1 || rows > 3) {
         cout << "Invalid input. Please enter a number between 1 and 3: ";
         cin >> rows;
    }

     cout << "The value must not exceed \n Enter number of columns: ";
     cin >> cols;
    while (cols < 1 || cols > 3) {
         cout << "Invalid input. Please enter a number between 1 and 3: ";
         cin >> cols;
    }

    // Dynamically allocate 2D array
    double** arr = new double*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new double[cols];
    }

    // Assign values to each element using nested loops
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = i * cols + j + 1; // assign a value to each element
        }
    }

    // Output the array dimensions and values
     cout << "Array dimensions: " << rows << " x " << cols <<    endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
             cout << arr[i][j] << " ";
        }
         cout <<endl;
    }

    // Deallocate memory
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
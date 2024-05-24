#include <iostream>
#include <string>

using namespace std;
int main() {
    //prompt the user input an interger and a string
    int number;
    string name;
    cout << "Enter the your Value: ";
    cin >> number;

    cout << "Enter your string name: ";
    cin >> name;

    // Dynamically allocate an integer
    int* dynamicInt = new int;
    *dynamicInt = number; // Assign a value to the dynamically allocated integer

    // Dynamically allocate a string
    string* dynamicString = new string(name);

    // Print the values
    cout << "Dynamically allocated integer: " << *dynamicInt << endl;
    cout << "Dynamically allocated string: " << *dynamicString << endl;

    // Clean up memory
    delete dynamicInt;
    delete dynamicString;

    return 0;
}

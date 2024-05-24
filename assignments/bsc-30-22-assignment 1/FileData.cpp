#include <iostream>
#include <fstream>
#include <string>
#include <cctype> 
using namespace std;

// This function counts vowels in the file
//The const declaration to prevent modifications through the running of the code
//Char used to allow all kinds of characters in the text document 
int countVowels(const string& str) {
    int vowelCount = 0;
    for (char a : str) {
        if (tolower(a) == 'a' || tolower(a) == 'e' ||
            tolower(a) == 'i' || tolower(a) == 'o' ||
            tolower(a) == 'u') {
            vowelCount++;
        }
    }
    return vowelCount;
}

// This function counts words in the string
int countWords(const string& str) {
    int wordCount = 0;
    bool inWord = false;
    for (char a : str) {
        if (isalpha(a)) {
            if (!inWord) {
                inWord = true;
                wordCount++;
            }
        } else {
            inWord = false;
        }
    }
    return wordCount;
}

// This function reverse in this string
string reverseString(const string& str) {
    string reversed;
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }
    return reversed;
}

// This function capitalizes the second letter of each word
string capitalizeSecondLetter(const string& str) {
    string result;
    bool capitalizeNext = true;
    for (char a : str) {
        if (isalpha(a)) {
            if (capitalizeNext) {
                result += toupper(a);
                capitalizeNext = false;
            } else {
                result += a;
            }
        } else {
            result += a;
            capitalizeNext = true;
        }
    }
    return result;
}

int main() {
    //This function is used to read the text file
    ifstream inputFile("module_statement.txt");
    if (!inputFile.is_open()) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    string fileData;
    string line;
    while (getline(inputFile, line)) {
        fileData += line + "\n";
    }
    inputFile.close();

    // Calculate and output the number of vowels
    int vowelCount = countVowels(fileData);
    cout << "Number of vowels: " << vowelCount << endl;

    // Calculate and output the number of words
    int wordCount = countWords(fileData);
    cout << "Number of words: " << wordCount << endl;

    // Reverse the statement and output
    string reversedStatement = reverseString(fileData);
    cout << "Reversed statement:\n" << reversedStatement << endl;

    // Capitalize the second letter of each word and output
    string capitalizedStatement = capitalizeSecondLetter(fileData);
    cout << "Capitalized statement:\n" << capitalizedStatement << endl;

    return 0;
}

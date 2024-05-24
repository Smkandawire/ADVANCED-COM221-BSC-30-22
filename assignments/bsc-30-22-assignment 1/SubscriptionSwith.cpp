#include <iostream>
#include <cstdlib> // For random number generation
using namespace std;

int main() {
    // Generate a random integer between 0 and 11
    int daysUntilExpiration = rand() % 12;

    // Output messages based on conditions
    switch (daysUntilExpiration) {
        case 0:
            cout << "Your subscription has expired." << endl;
            break;
        case 1:
            cout << "Your subscription expires within a day!" << endl;
            cout << "Renew now and save 20%!" << endl;
            break;
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Your subscription expires in " << daysUntilExpiration << " days" << endl;
            cout << "Renew now and save 10%!" << endl;
            break;
        default:
            cout << "You have an active subscription" << endl;
            break;
    }

    return 0;
}

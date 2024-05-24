// Main function for the program
int main() {
    Person Jane("Jane", 60.0f);
    Person John("John", 75.0f);
    float totalWeight = Jane.operator+(John);
    cout << "Total weight: " << totalWeight << endl;
    return 0;
}
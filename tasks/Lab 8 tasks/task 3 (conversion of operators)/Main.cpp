int main() {
    Person Jane("Jane", 60.0f, 30);
    Person John("John", 75.0f, 30);

    if (Jane == John) {
        std::cout << "This is the same person" << std::endl;
    } else {
        std::cout << "This is NOT the same person" << std::endl;
    }

    if (Jane < John) {
        std::cout << "Jane is younger than John" << std::endl;
    } else if (John > Jane) {
        std::cout << "John is older than Jane" << std::endl;
    } else {
        std::cout << "Jane and John are the same age" << std::endl;
    }

    int johnAge = John;
    std::cout << "John's Age: " << johnAge << std::endl;

    std::string janeFirstName = Jane;
    std::cout << "Jane's FirstName: " << janeFirstName << std::endl;

    float janeWeight = Jane;
    std::cout << "Jane' weight: " << janeWeight << std::endl;

    return 0;
}
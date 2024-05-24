#include "Person.h"

Person::Person(const std::string& firstName, float weight, int age)
    : mFirstName(firstName), mWeight(weight), mAge(age) {}

float Person::operator+(const Person& other) const {
    return mWeight + other.mWeight;
}

bool Person::operator==(const Person& other) const {
    return mAge == other.mAge;
}

bool Person::operator!=(const Person& other) const {
    return !(*this == other);
}

bool Person::operator<(const Person& other) const {
    return mAge < other.mAge;
}

bool Person::operator>(const Person& other) const {
    return mAge > other.mAge;
}

Person::operator int() const {
    return mAge;
}

Person::operator std::string() const {
    return mFirstName;
}

Person::operator float() const {
    return mWeight;
}
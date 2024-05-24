#pragma once
#include <string>
using namespace std;

class Person {
public:
    Person();
    Person(float newWeight);
    ~Person();
    // Overload the add operator
    float operator+(const Person& otherPerson);
private:
    float mWeight;
    string mFirstName;
    int mAge;
};

Person::Person() : mWeight(0.0f), mFirstName(""), mAge(0) {}

Person::Person(float newWeight) : mWeight(newWeight), mFirstName(""), mAge(0) {}

Person::~Person() {}

float Person::operator+(const Person& otherPerson) {
    return this->mWeight + otherPerson.mWeight;
}
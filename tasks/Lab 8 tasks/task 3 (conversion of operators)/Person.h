#ifndef PERSON_H
#define PERSON_H

class Person {
public:
    Person(const std::string& firstName, float weight, int age);
    float operator+(const Person& other) const;
    bool operator==(const Person& other) const;
    bool operator!=(const Person& other) const;
    bool operator<(const Person& other) const;
    bool operator>(const Person& other) const;
    operator int() const;
    operator std::string() const;
    operator float() const;

private:
    std::string mFirstName;
    float mWeight;
    int mAge;
};

#endif // PERSON_H
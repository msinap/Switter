#include "Age.h"
using namespace std;

const int Age::maxPossibleAge = 120;

Age::Age(const int &_age) {
    checkIfValidAge(_age);
    age = _age;
}

int Age::getAge() {
    return age;
}

void Age::checkIfValidAge(const int &a) {
    if (a > maxPossibleAge) {
        throw InvalidAge("InvalidAge");   
    }
}
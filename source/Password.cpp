#include "Password.h"
using namespace std;

const int Password::minPossibleLength = 6;
const int Password::maxPossibleLength = 32;

Password::Password(const string &_password) {
    checkIfValid(_password);
    hashed_password = hash(_password);
}

void Password::checkIfValid(const string &s) {
    checkIfValidLength(s);
    checkIfHaveAlphabet(s);
    checkIfHaveNumber(s);
}

void Password::checkIfValidLength(const string &s) {
    if (s.size() < minPossibleLength || s.size() > maxPossibleLength) {
        throw InvalidLengthInPassword("InvalidLengthInPassword");
    }
}

void Password::checkIfHaveAlphabet(const string &s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z') {
            return;
        }
    }
    throw NoAlphabetInPassword("NoAlphabetInPassword");
}

void Password::checkIfHaveNumber(const string &s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            return;
        }
    }
    throw NoNumberInPassword("NoNumberInPassword");
}

string Password::hash(string const &s) {
    //TODO
    return s;
}

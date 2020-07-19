#include "Username.h"
using namespace std;

Username::Username(const string &_username) {
    checkIfValidUsername(_username);
    username = _username;
}

string Username::getUsername() {
    return username;
}

void Username::checkIfValidUsername(const string &s) {
    for (int i = 0; i < s.size(); i++) {
        checkIfValidChar(s[i]);
    }
    checkIfValidLength(s);
    checkIfNotUsed(s);
}

void Username::checkIfNotUsed(const string &s) {
    //TODO
}

const int Username::maxPossibleLength = 16;
const int Username::minPossibleLength = 6;

void Username::checkIfValidLength(const string &s) {
    if (s.size() < minPossibleLength || s.size() > maxPossibleLength) {
        throw InvalidLengthInUsername("InvalidLengthInUsername");
    }
}

void Username::checkIfValidChar(const char &ch) {
    if (ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9' || ch == '_' || ch == '.') {
        // ok
    } else {
        throw InvalidCharInUsername("InvalidCharInUsername");
    }
}

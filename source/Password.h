#ifndef PASSWORD
#define PASSWORD

#include <bits/stdc++.h>
#include "Exception.h"

using namespace std;


class Password {
public:
    Password(const string &_password);

protected:
    string hashed_password;
    const static int minPossibleLength, maxPossibleLength;

    string hash(const string &s);
    void checkIfValid(const string &s);
    void checkIfValidLength(const string &s);
    void checkIfHaveAlphabet(const string &s);
    void checkIfHaveNumber(const string &s);
};


class InvalidPassword : public Exception {
    using Exception::Exception;
};

class InvalidLengthInPassword : public InvalidPassword {
    using InvalidPassword::InvalidPassword;
};

class NoAlphabetInPassword : public InvalidPassword {
    using InvalidPassword::InvalidPassword; 
};

class NoNumberInPassword : public InvalidPassword {
    using InvalidPassword::InvalidPassword;
};


#endif
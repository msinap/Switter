#ifndef USERNAME
#define USERNAME

#include <bits/stdc++.h>
#include "Exception.h"

using namespace std;


class Username {
public:
    Username(const string &_username);
    string getUsername();
protected:
    string username;
    static const int maxPossibleLength;
    static const int minPossibleLength;

    void checkIfValidUsername(const string &s);
    void checkIfValidLength(const string &s);
    void checkIfValidChar(const char &ch);
    void checkIfNotUsed(const string &s);
};


class InvalidUsername : public Exception {
    using Exception::Exception;
};

class InvalidCharInUsername : public InvalidUsername {
    using InvalidUsername::InvalidUsername;
};

class InvalidLengthInUsername : public InvalidUsername {
    using InvalidUsername::InvalidUsername;
};

class UsedBeforeUsername : public InvalidUsername {
    using InvalidUsername::InvalidUsername;
};


#endif
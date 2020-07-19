#ifndef NATIONAL_CODE
#define NATIONAL_CODE

#include <bits/stdc++.h>
#include "Exception.h"

using namespace std;


class NationalCode {
public:
    NationalCode(const string &_nationalCode);
    string getNationalCode();
protected:
    string nationalCode;
    static const int lengthOfNationalCode;

    void checkIfValidNationalCode(const string &s);
    void checkIfNumeric(const string &s);
    void checkLength(const string &s);
};



class InvalidNationalCode : public Exception {
    using Exception::Exception;
};

class NotNumericNationalCode : public InvalidNationalCode {
    using InvalidNationalCode::InvalidNationalCode;
};

class InvalidLenghtForNationalCode : public InvalidNationalCode {
    using InvalidNationalCode::InvalidNationalCode;
};






#endif
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
    static int lengthOfNationalCode;

    void checkIfValidNationalCode(const string &s);
    void checkIfNumeric(const string &s);
};



class InvalidNationalCodeError : public Exception {
    using Exception::Exception;
};

class NotNumericNationalCodeError : public InvalidNationalCodeError {
    using InvalidNationalCodeError::InvalidNationalCodeError;
};





#endif
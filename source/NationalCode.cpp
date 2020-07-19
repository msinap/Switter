#include "NationalCode.h"
using namespace std;

const int NationalCode::lengthOfNationalCode = 10;

NationalCode::NationalCode(const string &_nationalCode) {
    checkIfValidNationalCode(_nationalCode);
    nationalCode = _nationalCode;
}

string NationalCode::getNationalCode() {
    return nationalCode;
}

void NationalCode::checkIfValidNationalCode(const string &s) {
    checkIfNumeric(s);
    checkLength(s);
}

void NationalCode::checkIfNumeric(const string &s) {
    for (char ch : s) {
        if (ch < '0' || ch > '9') {
            throw NotNumericNationalCode("NotNumericNationalCode");
        }
    }
}

void NationalCode::checkLength(const string &s) {
    if (s.size() != lengthOfNationalCode) {
        throw InvalidLenghtForNationalCode("InvalidLenghtForNationalCode");
    }
}

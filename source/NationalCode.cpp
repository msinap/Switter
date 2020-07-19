#include "NationalCode.h"
using namespace std;


NationalCode::NationalCode(const string &_nationalCode) {
    checkIfValidNationalCode(_nationalCode);
    nationalCode = _nationalCode;
}

string NationalCode::getNationalCode() {
    return nationalCode;
}

void NationalCode::checkIfValidNationalCode(const string &s) {
    checkIfNumeric(s);
}

void NationalCode::checkIfNumeric(const string &s) {
    for (char ch : s) {
        if (ch < '0' || ch > '9') {
            throw NotNumericNationalCodeError("NotNumericNationalCodeError");
        }
    }
}

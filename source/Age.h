#ifndef AGE
#define AGE

#include <bits/stdc++.h>
#include "Exception.h"

using namespace std;


class Age {
public:
    Age(const int &_age);
    int getAge();
protected:
    int age;
    static const int maxPossibleAge;

    void checkIfValidAge(const int &a);
};


class InvalidAge : public Exception {
    using Exception::Exception;
};



#endif
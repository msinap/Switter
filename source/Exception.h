#ifndef EXCEPTION
#define EXCEPTION

#include <bits/stdc++.h>

using namespace std;


class Exception {
public:
    Exception();
    Exception(string _description);
    string what();
protected:
    string description;
};



#endif

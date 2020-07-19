#ifndef USER
#define USER

#include <bits/stdc++.h>
#include "Exception.h"
#include "NationalCode.h"
#include "Age.h"
#include "Username.h"

using namespace std;


class User {
public:

    enum class Gender {Male, Female, Other};

protected:
    NationalCode nationalCode;
    Age age;
    Gender gender;
    Username username;
    
    //vector<Role> roles;
    //

    vector<User*> followers;
    vector<User*> followings;

};


#endif
#include "Exception.h"
using namespace std;

Exception::Exception() 
    : description("") {}

Exception::Exception(string _description) 
    : description(_description) {}

string Exception::what() {
    return description;
}

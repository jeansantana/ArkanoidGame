#include "Utils.h"

Utils::Utils()
{
}

int Utils::stringToInt(string s) {
    int i;
    stringstream ss;
    ss << s;
    ss >> i;
    return i;
}

string Utils::intToString(int i) {
    stringstream ss;
    ss << i;
    return ss.str();
}



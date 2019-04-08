#include "alphanumeric.hpp"

bool alphanumeric(char c) {
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57)) {
        return true;
    } else {
        return false;
    }
}

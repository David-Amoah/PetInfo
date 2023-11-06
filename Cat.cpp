// copyright 2023
// Author: David Amoah


#include "Cat.h"
#include <iostream>
#include <string>
using std::string;

void Cat::SetBreed(string userBreed) {
    catBreed = userBreed;
}

string Cat::GetBreed() {
    return catBreed;
}

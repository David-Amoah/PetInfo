// copyright 2023
// Author: David Amoah

#ifndef PETINFO_CAT_H
#define PETINFO_CAT_H

#include <string>
#include "Pet.h"

class Cat : public Pet {
private:
    string catBreed;

public:
    void SetBreed(string userBreed);

    string GetBreed();
};



#endif //PETINFO_CAT_H

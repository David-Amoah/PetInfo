// copyright 2023
// Author: David Amoah

#ifndef PETINFO_PET_H
#define PETINFO_PET_H

#include <string>
//using namespace std;
using std::string;

class Pet {
protected:
    string petName;
    int petAge;

public:
    void SetName(string userName);

    string GetName();

    void SetAge(int userAge);

    int GetAge() const;

    void PrintInfo();
};




#endif //PETINFO_PET_H

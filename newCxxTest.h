// copyright 2023
// Author: David Amoah

#ifndef PETINFO_NEWCXXTEST_H
#define PETINFO_NEWCXXTEST_H

#endif //PETINFO_NEWCXXTEST_H


// Copyright 2023
// Author: David Amoah

#ifndef NEWCXXTEST_H
#define NEWCXXTEST_H

//#include "NameList.h"
//#include "NameNode.h"

#include "Cat.h"
#include "Pet.h"
#include <iostream>

using std::cout;

#include <cxxtest/TestSuite.h>

class newCxxTest : public CxxTest::TestSuite {
public:


    void testMyPetClass() {   ///test for the NameNode class
        Pet pet1;

        pet1.SetName("Holly");
        TS_ASSERT_EQUALS(pet1.GetName(), "Holly");

        pet1.SetAge(7);
        TS_ASSERT_EQUALS(pet1.GetAge(), 7);

        pet1.PrintInfo();

    }

    void testMyCatClass() {   ///test for the NameNode class
        Cat cat1;

        cat1.SetBreed("Siamese");
        cat1.SetName("Hungie");
        cat1.SetAge(9);
        TS_ASSERT_EQUALS(cat1.GetBreed(), "Siamese");

        cat1.PrintInfo();

    }


};
#endif /* NEWCXXTEST_H */

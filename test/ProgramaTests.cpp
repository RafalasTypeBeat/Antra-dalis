#include <gtest/gtest.h>
#include "../mokiniai.h"

TEST(ProgramaTests, MedianaTest){
    mokinys mok1("vardas", "pavarde");
    mok1.setMediana(10);
    EXPECT_EQ(9,mok1.getMediana());
}

TEST(ProgramaTests, CopyConstructor){
    mokinys mok1("vardas", "pavarde");
    mokinys mok2(mok1);
    EXPECT_EQ(mok1.getName(), "vardas1");
}
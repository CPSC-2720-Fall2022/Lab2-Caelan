#define CATCH_CONFIG_MAIN
#include <catch2/catch_test_macros.hpp>
#include "operations.h"


TEST_CASE("Test Addition of 2 numbers" ,"[addTwo]"){
    REQUIRE(addTwo(2,2) == 4);
    REQUIRE(addTwo(1,0) == 1);
    REQUIRE(addTwo(-1,2) == 1);
    REQUIRE(addTwo(0,0) == 0);
}






#define CATCH_CONFIG_MAIN
#include <catch2/catch_test_macros.hpp>
#include "operations.h"


TEST_CASE("Square an int" ,"[square]"){
    REQUIRE(square(2) == 4);
    REQUIRE(square(0) == 0);
    REQUIRE(square(-2) == 4);
    REQUIRE(square(3) == 9);
}

TEST_CASE("Test subtraction of two integers" ,"[subtractTwo]"){
    REQUIRE(subtractTwo(2,2) == 0);
    REQUIRE(subtractTwo(1,0) == 1);
    REQUIRE(subtractTwo(-10,-10) == 0);
    REQUIRE(subtractTwo(12402004,3) == 12402001);
}

TEST_CASE("Test multiplication of two integers" ,"[multiplyTwo]"){
    REQUIRE(multiplyTwo(2,2) == 4);
    REQUIRE(multiplyTwo(1,0) == 0);
    REQUIRE(multiplyTwo(-10,-10) == 100);
    REQUIRE(multiplyTwo(1024,3) == 3072);
}

TEST_CASE("Test division of two integers" ,"[divideTwo]"){
    REQUIRE(divideTwo(2,2) == 1);
    REQUIRE(divideTwo(1,0) == 0);
    REQUIRE(divideTwo(-10,-10) == 1);
    REQUIRE(divideTwo(999,3) == 333);
}











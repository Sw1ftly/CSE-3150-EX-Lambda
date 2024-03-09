#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "lambda.h"


TEST_CASE("Check perfect numbers") {
    CHECK(isPerfect(6) == true);
    CHECK(isPerfect(28) == true);
    CHECK(isPerfect(496) == true);
    CHECK(isPerfect(8128) == true);
    CHECK(isPerfect(33550336) == true);
}

TEST_CASE("Check non-perfect numbers") {
    CHECK(isPerfect(10) == false);
    CHECK(isPerfect(12) == false);
    CHECK(isPerfect(100) == false);
    CHECK(isPerfect(1024) == false);
    CHECK(isPerfect(33550337) == false);
}
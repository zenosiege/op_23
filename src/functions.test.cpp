#include "functions.h"
#include <catch2/catch.hpp>

//тест для максимума
TEST_CASE("Максимум") {

    CHECK(max(1, 2) == 2);
    CHECK(max(-1, -2) == -1);
    CHECK(max(0, 10) == 10);
    CHECK(max(-2, 2) == 2);

}

//тест для суммы
TEST_CASE("Сумма") {

    CHECK(sum(5, 4) == 9);
    CHECK(sum(-2, 2) == 0);
    CHECK(sum(-5, -4) == -9);
    CHECK(sum(0, 3) == 3);

}

//тест функции rectArea в целом
TEST_CASE("rectArea true") {

    CHECK(rectArea(5, 4) == 20);
    CHECK(rectArea(1, 3) == 3);
    CHECK(rectArea(20, 40) == 800);

}

TEST_CASE("rectArea false") {

    CHECK_THROWS(rectArea(-3, 4));
    CHECK_THROWS(rectArea(0, 4));
    CHECK_THROWS(rectArea(-15, 1));
    CHECK_THROWS(rectArea(5, -2));

}

TEST_CASE("contrast test") {

    CHECK(contrast({5, 2, 3, 6, 8, 29}) == 27);
    CHECK(contrast({4, 20, 7, 8}) == 16);
    CHECK(contrast({26, 40, 5, 14}) == 35);

}
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "romanos.hpp"

TEST_CASE("Algarismos únicos", "[romanos]") {
    REQUIRE(romanos_para_decimal("I") == 1);
    REQUIRE(romanos_para_decimal("V") == 5);
}

TEST_CASE("Algarismos inválidos", "[romanos]") {
    REQUIRE(romanos_para_decimal("G") == -1);
    REQUIRE(romanos_para_decimal("i") == -1);
}

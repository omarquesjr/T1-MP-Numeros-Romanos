#define CATCH_CONFIG_MAIN
#include "./catch.hpp"
#include "./romanos.hpp"

TEST_CASE("Algarismos únicos", "[romanos]") {
    REQUIRE(romanos_para_decimal("I") == 1);
    REQUIRE(romanos_para_decimal("V") == 5);
    REQUIRE(romanos_para_decimal("X") == 10);
    REQUIRE(romanos_para_decimal("L") == 50);
    REQUIRE(romanos_para_decimal("C") == 100);
    REQUIRE(romanos_para_decimal("D") == 500);
    REQUIRE(romanos_para_decimal("M") == 1000);
}

TEST_CASE("Algarismos inválidos", "[romanos]") {
    REQUIRE(romanos_para_decimal("G") == -1);
    REQUIRE(romanos_para_decimal("i") == -1);
    REQUIRE(romanos_para_decimal("A") == -1);
    REQUIRE(romanos_para_decimal("U") == -1);
    REQUIRE(romanos_para_decimal("Z") == -1);
    REQUIRE(romanos_para_decimal("b") == -1);
    REQUIRE(romanos_para_decimal("m") == -1);
    REQUIRE(romanos_para_decimal("O") == -1);
    REQUIRE(romanos_para_decimal("T") == -1);
}

TEST_CASE("Algarismos múltiplos (somente soma na conversão)", "[romanos]") {
    REQUIRE(romanos_para_decimal("II") == 2);
    REQUIRE(romanos_para_decimal("XI") == 11);
    REQUIRE(romanos_para_decimal("XVIII") == 18);
    REQUIRE(romanos_para_decimal("DCXXXIII") == 633);
    REQUIRE(romanos_para_decimal("MDCLXXVIII") == 1678);
}

TEST_CASE("Algarismos múltiplos (com subtração na conversão)", "[romanos]") {
    REQUIRE(romanos_para_decimal("IV") == 4);
    REQUIRE(romanos_para_decimal("XVIII") == 18);
    REQUIRE(romanos_para_decimal("LIX") == 59);
    REQUIRE(romanos_para_decimal("CLXXXIV") == 184);
    REQUIRE(romanos_para_decimal("CDLXXXVII") == 487);
    REQUIRE(romanos_para_decimal("DCXXXIII") == 633);
    REQUIRE(romanos_para_decimal("CMXCV") == 995);
    REQUIRE(romanos_para_decimal("MMCMXCIX") == 2999);
}

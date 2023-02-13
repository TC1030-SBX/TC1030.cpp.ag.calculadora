// Test definitions. Do NOT edit this file!

#include <tuple>

#define CATCH_CONFIG_MAIN // defines main() automatically
#include "catch.hpp"

#include "../Calculadora.hpp"

// =====================
// Probando el constructor por default
// ---------------------

TEST_CASE("ex0", "[Calculadora default]")
{
    Calculadora c;

    SECTION("Constructor por default") {
        REQUIRE(c.getX()==0);
        REQUIRE(c.getY()==0);
    }
}

// =====================
// Probando el constructor con parametros
// ---------------------

TEST_CASE("ex1", "[Calculadora con parametros]")
{
    Calculadora c(3,7);

    SECTION("Constructor con parametros") {
        REQUIRE(c.getX()==3);
        REQUIRE(c.getY()==7);
    }
}

// =====================
// Probando setters y getters
// ---------------------

TEST_CASE("ex2", "[Calculadora setters y getters]")
{
    Calculadora c;

    SECTION("Setters y getters") {
        c.setX(3);
        c.setY(7);
        REQUIRE(c.getX()==3);
        REQUIRE(c.getY()==7);
    }
}

// =====================
// Prueba para calculadora aditiva
// ---------------------

TEST_CASE("ex3", "[Calculadora aditiva]")
{
    Calculadora c(3,7);

    SECTION("Sumas de numeros reales") {
        REQUIRE(c.suma()==10);
    }

    SECTION("Multplicacion de numero reales") {
        REQUIRE(c.multiplica()==21);
    }
}

// =====================
// Prueba para calculadora sustractiva
// ---------------------

TEST_CASE("ex4", "[Calculadora sustractiva]")
{
    Calculadora c(3,7);

    SECTION("Resta de numeros reales") {
        REQUIRE(c.resta()==-4);
    }

    SECTION("División de numero reales") {
        REQUIRE(c.divide()==3.0/7.0);
    }
}
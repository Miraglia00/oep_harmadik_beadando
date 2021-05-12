#include <iostream>
#include <Earth.h>
#define DEBUG

#ifndef DEBUG


using namespace std;

int main()
{
    Earth e("input.txt");
    e.run();
    return 0;
}

#else

#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "Earth.h"
#include "Land.h"
#include "Lake.h"
#include "Green.h"
#include "Plain.h"

TEST_CASE("Earth()", "Checking file reading"){

    CHECK_NOTHROW(Earth e("input.txt"));

    CHECK_THROWS(Earth e("notexist.txt"));

    CHECK_THROWS(Earth e("empty.txt"));
}

TEST_CASE("Earth::calculate_weather()", "Checking weather based on humidity"){
    Earth e("input.txt");
    float humidity = 88.88;
    Land::Weather w;

    w = e.calculate_weather(humidity);
    REQUIRE(w == Land::Weather::Rainy);
    REQUIRE_FALSE(w == Land::Weather::Sunny);

    humidity = 33.33;
    w = e.calculate_weather(humidity);
    REQUIRE(w == Land::Weather::Sunny);
    REQUIRE_FALSE(w == Land::Weather::Rainy);
}

TEST_CASE("Lake::update", "Lake class update checking"){
    Land::Weather w;

    Lake l("Lake", 50);
    w = Land::Weather::Sunny;
    l.update(w);
    REQUIRE(l.get_water() == 40);

    w = Land::Weather::Cloudy;
    l.update(w);
    REQUIRE(l.get_water() == 37);

    w = Land::Weather::Rainy;
    l.update(w);
    REQUIRE(l.get_water() == 52);

    REQUIRE(l.change_to() == "t");
    REQUIRE_FALSE(l.change_to() == "z");

    w = Land::Weather::Sunny;
    l.update(w);
    REQUIRE(l.get_water() == 42);
    REQUIRE(l.change_to() == "z");
    REQUIRE_FALSE(l.change_to() == "t");
}

TEST_CASE("Green::update", "Green class update checking"){
    Land::Weather w;

    Green g("Green", 30);
    w = Land::Weather::Sunny;
    g.update(w);
    REQUIRE(g.get_water() == 24);

    w = Land::Weather::Cloudy;
    g.update(w);
    REQUIRE(g.get_water() == 22);

    w = Land::Weather::Rainy;
    g.update(w);
    REQUIRE(g.get_water() == 32);

    REQUIRE(g.change_to() == "z");
    REQUIRE_FALSE(g.change_to() == "t");
    REQUIRE_FALSE(g.change_to() == "p");

    w = Land::Weather::Sunny;
    g.update(w);
    g.update(w);
    g.update(w);
    REQUIRE(g.get_water() == 14);
    REQUIRE(g.change_to() == "p");
    REQUIRE_FALSE(g.change_to() == "z");
}

TEST_CASE("Plain::update", "Plain class update checking"){
    Land::Weather w;

    Plain p("Plain", 19);
    w = Land::Weather::Sunny;
    p.update(w);
    REQUIRE(p.get_water() == 16);

    w = Land::Weather::Cloudy;
    p.update(w);
    REQUIRE(p.get_water() == 15);

    REQUIRE(p.change_to() == "p");
    REQUIRE_FALSE(p.change_to() == "z");

    w = Land::Weather::Rainy;
    p.update(w);
    REQUIRE(p.get_water() == 20);

    REQUIRE(p.change_to() == "z");
    REQUIRE_FALSE(p.change_to() == "p");

}

#endif

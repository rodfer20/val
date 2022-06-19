#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "renderer.hpp"

TEST_CASE("Test renderer connection")
{
    Renderer renderer = Renderer();
    REQUIRE(renderer.testCreate() == "SUCCESS");
}

#define CATCH_CONFIG_MAIN
#include "../include/catch2/catch.hpp"


#include "../include/val/renderer.hpp"

TEST_CASE("Test renderer connection")
{
    Renderer renderer = Renderer();
    REQUIRE(renderer.testCreate() == "SUCCESS");
}

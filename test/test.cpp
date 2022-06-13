#define CATCH_CONFIG_MAIN
#include "../include/catch2/catch.hpp"

TEST_CASE("Renderer success run")
{
    REQUIRE(testRendererSuccess() == "RENDERER SUCCESS");
}

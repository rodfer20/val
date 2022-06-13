#include <iostream>

#include "../include/val/renderer.hpp"


Renderer::Renderer()
{
    msgSuccess = "RENDERER SUCCESS";
}

void Renderer::printSuccess(void)
{
    std::cout << msgSuccess << std::endl;
}

std::string Renderer::testSuccess(void)
{
    return msgSuccess;
}

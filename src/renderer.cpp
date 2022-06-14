#include <iostream>

#include "../include/val/renderer.hpp"


Renderer::Renderer()
{
    msg = "SUCCESS";
}

void Renderer::printCreate(void)
{
    std::cout << msg << std::endl;
}

std::string Renderer::testCreate(void)
{
    return msg;
}

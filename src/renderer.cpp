#include <iostream>

#include "renderer.hpp"


Renderer::Renderer()
{
}

void Renderer::screenDraw(void)
{
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window *window = SDL_CreateWindow(
        "val",
        0,
        0,
        1080,
        640,
        1
    );
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);
    SDL_Delay(3000);
    SDL_DestroyWindow(window);
    SDL_Quit();
}

std::string Renderer::testCreate(void)
{
    std::string msg = "SUCCESS";
    return msg;
}

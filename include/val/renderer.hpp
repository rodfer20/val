#pragma once

#include "SDL.h"
#include <string>


class Renderer
{
    private:
    
    public:
        Renderer();

        // Catch2 test methods
        std::string testCreate(void);
        
        // IO methods
        void screenDraw(void);
};

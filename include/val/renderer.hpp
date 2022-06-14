#pragma once

#include <string>


class Renderer
{
    private:
        std::string msg;
    
    public:
        Renderer();

        // Catch2 test methods
        std::string testCreate(void);
        
        // IO methods
        void printCreate(void);
};

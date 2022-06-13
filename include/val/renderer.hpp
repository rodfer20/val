#pragma once

#include <string>


class Renderer
{
    private:
        std::string msgSuccess;
    
    public:
        Renderer();

        // Catch2 test methods
        std::string testSuccess(void);
        
        // IO methods
        void printSuccess(void);
};

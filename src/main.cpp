#include <stdlib.h>
#include <stdio.h>
#include <SDL.h>
    
// Screen settings
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main(int argc, char* args[])
{
    SDL_Window* window = NULL;
    SDL_Surface* screenSurface = NULL;
    SDL_Event event;

    //Initialize SDL
    if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
    {
        printf( "SDL could not initialize! SDL_Error: %s\n", SDL_GetError() );
    }   
    else
    {
        //Create window
        window = SDL_CreateWindow("val", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
        
        if( window == NULL )
        {
            printf( "Window could not be created! SDL_Error: %s\n", SDL_GetError() );
        }    
        else
        {
            //Fill the surface white
            screenSurface = SDL_GetWindowSurface(window);
            SDL_FillRect(screenSurface, NULL, SDL_MapRGB( screenSurface->format, 0xFF, 0xFF, 0xFF));
            SDL_UpdateWindowSurface(window);
            
            while(SDL_PollEvent(&event)) {
                // do nothing
            }
            SDL_Delay(3000);
        }
    }
    SDL_DestroyWindow( window );
    
    SDL_Quit();
    return EXIT_SUCCESS;
}

//Using SDL and standard IO


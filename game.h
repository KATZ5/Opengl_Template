#ifndef GAME_H
#define GAME_H 

#include "glad.h"
#include <GLFW/glfw3.h>


//Reperesents the current state of the game
enum GameState {
    GAME_ACTIVE,
    GAME_MENU,
    GAME_WIN
};

//Game hold all game-related state and functionality
//Combines all game-related data into a single class for 
//easy access to each of the components and manageability
 class Game{
public:
    //game state
    GameState       State;
    bool            Keys[1024];
    unsigned int    Width,Height;

    //Constructor/deconstructor
    Game(unsigned int width, unsigned int height);
    ~Game();

    //initiialize game state (load all shaders/texture/levels)
    void Init();
    //game loop
    void ProcessInput(float dt);
    void Update(float dt);
    void Render();
};   
#endif // 


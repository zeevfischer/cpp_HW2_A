#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>

namespace ariel
{
    class Player
    {
    private:
        std::string name;
    public:
        Player(std::string name);
        Player(){}
        int stacksize();
        int cardesTaken();
        // ~player();
    };    
}
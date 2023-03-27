#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>

#include "player.hpp"

namespace ariel
{
    class Game
    {
    private:
        Player p1;
        Player p2;
    public:
        Game(Player p1, Player p2);
        void playTurn();
        void playAll();
        void printWiner();
        void printLog();
        void printStats();
        void printLastTurn();
        // ~game();
    };
}
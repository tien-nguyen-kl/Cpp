#ifndef TICTACTOEGAME_HPP
#define TICTACTOEGAME_HPP

#pragma once

// #include <iostream>
// #include <vector>
#include <string>
// #include <sstream>

#include "TicTacToeField.hpp"

class TicTacToeGame : public TicTacToeField {
public:
    TicTacToeGame(std::string player1, std::string player2);
    std::string getFieldStr();
    std::string nameWinner();
    void play(int row, int col);
    bool is_finished();

private:
    std::string player1;
    std::string player2;
    int CurrentPlayer;

};

#endif /*TICTACTOEGAME_HPP*/
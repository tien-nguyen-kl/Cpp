#ifndef TICTACTOEFIELD_HPP
#define TICTACTOEFIELD_HPP

#pragma once
#include <vector>
#include <string>
#include <sstream>


class TicTacToeField{
public:
    TicTacToeField();
    void set_field(std::vector<std::vector<int>> field);

    std::string getFieldStr();

    int calculateWinner();

protected:
std::vector<std::vector<int>> field;
};

#endif /*TICTACTOEFIELD_HPP*/


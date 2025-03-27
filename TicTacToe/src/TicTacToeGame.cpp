#include "TicTacToe/TicTacToeGame.hpp"
#include <iostream>
#include <sstream>
using namespace std;

TicTacToeGame::TicTacToeGame(std::string player1, std::string player2)
: player1(player1), player2(player2)
{
    cout << "This is from TicTacToeGame" <<endl;
    cout << player1 << " and " << player2 <<endl;
    this->CurrentPlayer = 1;
    
};

string TicTacToeGame::getFieldStr(){
    stringstream result; 

    result << "Player 1: " << player1 << endl;
    result << "Player 2: " << player2 << endl;

    result << TicTacToeField::getFieldStr();

    return result.str();
}

void TicTacToeGame::play(int row, int col){
    
    if (row < this->field.size() && col<this->field[0].size() && field[row][col] == 0){
        if(this->CurrentPlayer == 1 ){
            cout<< "Input for player 1" << endl;
            this->field[row][col] = 1;
            this->CurrentPlayer = 2;
        }else{
            cout<< "Input for player 2" << endl;
            this->field[row][col] = 2;
            this->CurrentPlayer = 1;
        }
    }
    else{
        cout << "Position invalid! Enter again." << endl;
    }
}

bool TicTacToeGame::is_finished(){
    int winner = TicTacToeField::calculateWinner();

    if (winner == 1 || winner == 2){
        return true;
    }
    else{
        for (const vector<int> &row : field){
            for (const int val: row){
                if (val==0){
                    return false;
                }
            }
        }
    }
    return true;   
}

string TicTacToeGame::nameWinner(){
    if (is_finished()){
        int winner = TicTacToeField::calculateWinner();
        if (winner == 1){
            return player1;
        }else if (winner == 2){
            return player2;
        }else{
            return "Game draw!";
        }

    }
    return "";
}
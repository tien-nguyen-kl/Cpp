#include <iostream>
#include <vector>
#include <string>
#include "TicTacToe/TicTacToeField.hpp"
#include "TicTacToe/TicTacToeGame.hpp"

using namespace std;
int main(int argc, const char * argv[]){

    TicTacToeField field1;
    TicTacToeGame g("Tien", "Max");

    cout << g.getFieldStr() << endl;
    

    vector<vector<int>> field = {
        {1, 0, 1},
        {2, 2, 1},
        {1, 2, 1}
    };

    while(!g.is_finished()){
        int row, col;
        cout << "Enter position: " << endl;
        cin >> row >> col;
        g.play(row,col);
        string output =  g.getFieldStr();
        cout << output <<endl;
    }

    string winner = g.nameWinner();

    cout << winner << " won the game!" << endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <string>
#include "TicTacToe.cpp"

int main(int argc, const char * argv[]){

    TicTacToeField field1;

    vector<vector<int>> field = {
        {1, 0, 1},
        {2, 2, 1},
        {1, 2, 1}
    };

    field1.set_field(field);
    string output =  field1.getFieldStr();
    int winner = field1.calculateWinner();

    cout << winner << " hat das Spiel gewonnen" << endl;
    cout << output <<endl;


    return 0;
}
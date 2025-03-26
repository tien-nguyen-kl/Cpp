#include <iostream>
#include <array>
#include <string>

using namespace std;

int calculateWinner(const array<array<int,3>, 3>& field){
    //Now I modify the code
    // Check for horizontal or vertical win
    for (int i = 0; i < field.size(); i++){
        // Check horizontal win (row-wise)
        if (field[i][0] != 0 && field[i][0] == field[i][1] && field[i][0] == field[i][2]){
            return field[i][0];
        }
        // Check vertical win (column-wise)
        else if (field[0][i] != 0 && field[0][i] == field[1][i] && field[0][i] == field[2][i])
        {
            return field[0][i];

        }
    }
        // Check diagonal from top-left to bottom-right
        if (field[0][0] != 0 && field[0][0] == field[1][1] && field[0][0] == field[2][2]){
            return field[0][0];
        }
        // Check diagonal from top-right to bottom-left
        if (field[2][0] != 0 && field[2][0] == field[1][1] && field[2][0] == field[0][2]){
                return field[2][0];
        }

}

int main(int argc, const char * argv[]){

    array<array<int, 3>, 3> field = {{
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    }};

    field[0] = {1, 0, 1};
    field[1] = {2, 2, 1};
    field[2] = {1, 2, 1};
    
    int winner = calculateWinner(field);
    cout << winner << " hat das Spiel gewonnen" << endl;

    for (const auto &r: field){
        for (const int val: r){
            cout << val << " "; 
        }
        cout << endl;
    }
    return 0;
}
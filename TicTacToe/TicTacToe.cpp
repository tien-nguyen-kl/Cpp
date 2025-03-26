#include <iostream>
#include <array>
#include <string>

using namespace std;

int calculateWinner(array<array<int,3>, 3> field){

    for (int i = 0; i < field.size(); i++){
        if (field[i][0] != 0 && field[i][0] == field[i][1] && field[i][0] == field[i][2]){
            // cout << field[i][0] << " hat gewonnen (case 1)" << endl;
            return field[i][0];
        }else if (field[0][i] != 0 && field[0][i] == field[1][i] && field[0][i] == field[2][i])
        {
            // cout << field[0][i] << " hat gewonnen (case 2)"<< endl;
            return field[0][i];

        }
    }
        if (field[0][0] != 0 && field[0][0] == field[1][1] && field[0][0] == field[2][2]){
            // cout << field[0][0] << " hat gewonnen (case 3)" << endl;
            return field[0][0];
        }
        if (field[2][0] != 0 && field[2][0] == field[1][1] && field[2][0] == field[0][2]){
                // cout << field[2][0] << " hat gewonnen (case 4)" << endl;
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
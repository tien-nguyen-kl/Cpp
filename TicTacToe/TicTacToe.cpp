#include <iostream>
#include <vector>
#include <string>

using namespace std;


int calculateWinner(const vector<vector<int>> &field) {
    for (int i = 0; i <= 2; i++) {
        if (field.at(i).at(0) != 0 &&
            field.at(i).at(0) == field.at(i).at(1) &&
            field.at(i).at(0) == field.at(i).at(2)) {
            
            return field.at(i).at(0);
        }
    }
    
    for (int i = 0; i <= 2; i++) {
        if (field.at(0).at(i) != 0 &&
            field.at(0).at(i) == field.at(1).at(i) &&
            field.at(0).at(i) == field.at(2).at(i)) {
            
            return field.at(0).at(i);
        }
    }
    
    if (field.at(0).at(0) != 0 &&
        field.at(0).at(0) == field.at(1).at(1) &&
        field.at(0).at(0) == field.at(2).at(2)) {
        
        return field.at(0).at(0);
    }
    
    if (field.at(0).at(2) != 0 &&
        field.at(0).at(2) == field.at(1).at(1) &&
        field.at(0).at(2) == field.at(2).at(0)) {
        
        return field.at(0).at(2);
    }
    
    return 0;
}

int main(int argc, const char * argv[]){

    vector<vector<int>> field = {
        {1, 0, 1},
        {0, 1, 0},
        {2, 0, 1}
    };

    for (const auto &r: field){
        for (const int val: r){
            cout << val << " "; 
        }
        cout << endl;
    }

    auto winner = calculateWinner(field);
    cout << winner << " hat das Spiel gewonnen!" << endl;
    return 0;
}
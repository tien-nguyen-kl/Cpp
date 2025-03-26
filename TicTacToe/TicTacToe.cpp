#include <iostream>
#include <vector>
#include <string>

using namespace std;


class TicTacToeField{
public:
    TicTacToeField(){
        cout <<"Ich werde aufgerufen, wenn die Klasse erstellt wird"<<endl;
        field = {{
            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0}
        }};
    };

    void set_field(vector<vector<int>> field){
        this->field = field;
    }

    void print_field(){
        for (const auto &r: this->field){
            for (const int val: r){
                cout << val << " "; 
            }
            cout << endl;
        }
    }

    int calculateWinner() {
        for (int i = 0; i <= 2; i++) {
            if (this->field.at(i).at(0) != 0 &&
            this->field.at(i).at(0) == this->field.at(i).at(1) &&
            this->field.at(i).at(0) == this->field.at(i).at(2)) {
                
                return this->field.at(i).at(0);
            }
        }
        
        for (int i = 0; i <= 2; i++) {
            if (this->field.at(0).at(i) != 0 &&
            this->field.at(0).at(i) == this->field.at(1).at(i) &&
                this->field.at(0).at(i) == this->field.at(2).at(i)) {
                
                return this->field.at(0).at(i);
            }
        }
        
        if (this->field.at(0).at(0) != 0 &&
        this->field.at(0).at(0) == this->field.at(1).at(1) &&
        this->field.at(0).at(0) == this->field.at(2).at(2)) {
            
            return this->field.at(0).at(0);
        }
        
        if (this->field.at(0).at(2) != 0 &&
        this->field.at(0).at(2) == this->field.at(1).at(1) &&
        this->field.at(0).at(2) == this->field.at(2).at(0)) {
            
            return this->field.at(0).at(2);
        }
        
        return 0;
    }
private:
    vector<vector<int>> field;
};


int main(int argc, const char * argv[]){

    TicTacToeField field1;

    vector<vector<int>> field = {
        {1, 0, 1},
        {2, 2, 1},
        {1, 2, 1}
    };

    field1.set_field(field);
    field1.print_field();
    int winner = field1.calculateWinner();
    cout << winner << " hat das Spiel gewonnen" << endl;


    return 0;
}
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

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

    string getFieldStr(){
        stringstream result;
        //Fuellen Stream mit Daten
        for (const auto &r: this->field){
            for (const int val: r){
                result << val << " "; 
            }
            result << endl;
        }
        //Gib mir bitte den String aus meinem Stringstream
        return result.str();
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



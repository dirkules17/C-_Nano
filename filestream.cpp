#include <iostream>
#include <vector>
#include <fstream>

using std::vector;
using std::cout;


void PrintBoard(vector<vector<int>> vIn){
     for(int i=0;i<vIn.size();i++){
        cout<<"\n";
        for(int j=0;j<vIn[i].size();j++)
        cout <<vIn[i][j] << "";
     }
}   

int main(){
    
    vector<vector<int>> board;
    board = {{0, 1, 0, 0, 0, 0},
{0, 1, 0, 0, 0, 0},
{0, 1, 0, 0, 0, 0},
{0, 1, 0, 0, 0, 0},
{0, 0, 0, 0, 1, 0}};

std::ifstream my_file;
my_file.open("files/1.board");
if (my_file) {
      std::cout << "The file stream has been created!" << "\n";
      std::string line;
        while (getline(my_file, line)) {
            std::cout << line << "\n";
        }
    }    

//PrintBoard(board);

};


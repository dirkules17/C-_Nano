#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>

using std::vector;
using std::cout;
using std::istringstream;
using std::string;


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

        string a("1 2 3");

        istringstream my_stream(a);

        int n;
    
         while (my_stream) {
            my_stream >> n;
            if (my_stream) {
                cout << "That stream was successful: " << n << "\n";
            }
            else {
                cout << "That stream was NOT successful!" << "\n";            
            }
         }
}

//PrintBoard(board);

};


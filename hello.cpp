#include <iostream>
#include <vector>

using std::vector;
using std::cout;


int main(){
    
    vector<vector<int>> board;
    board = {{0, 1, 0, 0, 0, 0},
{0, 1, 0, 0, 0, 0},
{0, 1, 0, 0, 0, 0},
{0, 1, 0, 0, 0, 0},
{0, 0, 0, 0, 1, 0}};

    for(int i=0;i<board.size();i++)
        for(int j=0;j<board[i].size();j++)
        cout <<board[i][j] << "\n";
};




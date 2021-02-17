#include <iostream>
#include <vector>

using std::vector;
using std::cout;



int main(){

    vector<vector<int>> grid; 
    vector<int> u;
    grid = {{0, 1, 0, 0, 0, 0},
{0, 1, 0, 0, 0, 0},
{0, 1, 0, 0, 0, 0},
{0, 1, 0, 0, 0, 0},
{0, 0, 0, 0, 1, 0}};
    u = {0,0};

    for(int i=0;i<u.size();i++)
    cout<<u[i];
}
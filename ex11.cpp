#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<vector<int>> matrix(3, vector<int>(4));

    matrix[0][0] = 10;
    matrix[1][2] = 20;
    matrix[2][3] = 30;

    cout << matrix[1][2];

    return 0;
}
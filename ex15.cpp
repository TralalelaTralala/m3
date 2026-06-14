#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void Show(int x)
{
    cout << x << " ";
}

int main()
{
    vector<int> v = {10, 20, 30, 40};

    for_each(v.begin(), v.end(), Show);

    return 0;
}
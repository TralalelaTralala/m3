#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v = {2, 5, 8, 11, 14};

    int count = count_if(v.begin(), v.end(),
        [](int x) { return x % 2 == 0; });

    cout << "Count = " << count << endl;

    auto it = find_if(v.begin(), v.end(),
        [](int x) { return x > 10; });

    if (it != v.end())
        cout << "Found = " << *it << endl;

    return 0;
}
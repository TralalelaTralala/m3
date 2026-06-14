#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l = {10, 20, 30};

    l.push_front(5);
    l.push_back(40);

    for(int x : l)
        cout << x << " ";

    return 0;
}
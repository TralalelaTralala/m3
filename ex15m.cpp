#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> students;

    students[1] = "Ivan";
    students[2] = "Petro";

    cout << students[1];

    return 0;
}
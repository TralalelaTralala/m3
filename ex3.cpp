#include <iostream>

using namespace std;

class Array
{
private:
    int arr[5];

public:
    Array()
    {
        for(int i = 0; i < 5; i++)
            arr[i] = (i + 1) * 10;
    }

    int& operator[](int index)
    {
        return arr[index];
    }
};

int main()
{
    Array a;

    cout << a[0] << endl;
    cout << a[1] << endl;

    a[2] = 100;

    cout << a[2] << endl;

    return 0;
}
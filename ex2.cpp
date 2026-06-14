#include <iostream>

using namespace std;

class Number
{
private:
    int value;

public:
    Number(int v)
    {
        value = v;
    }

    friend Number operator+(int n, const Number& obj);

    void show()
    {
        cout << value << endl;
    }
};

Number operator+(int n, const Number& obj)
{
    return Number(n + obj.value);
}

int main()
{
    Number a(10);

    Number b = 5 + a;

    b.show();

    return 0;
}
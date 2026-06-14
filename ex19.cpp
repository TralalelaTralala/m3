#include <iostream>

using namespace std;

class Number
{
protected:
    int n;

public:
    Number(int x = 0)
    {
        n = x;
    }

    virtual long long factorial(int x)
    {
        long long f = 1;

        for(int i = 1; i <= x; i++)
            f *= i;

        return f;
    }
};

class Array : public Number
{
private:
    int arr[100];
    int size;

public:
    Array(int s)
    {
        size = s;
    }

    void input()
    {
        for(int i = 0; i < size; i++)
        {
            cout << "arr[" << i << "] = ";
            cin >> arr[i];
        }
    }

    void show()
    {
        cout << "\nNumber\tFactorial\n";

        for(int i = 0; i < size; i++)
        {
            cout << arr[i]
                 << "\t"
                 << factorial(arr[i])
                 << endl;
        }
    }
};

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    Array a(n);

    a.input();

    a.show();

    return 0;
}
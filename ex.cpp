#include <iostream>

using namespace std;

class Point
{
private:
    int x, y;

public:
    Point(int a = 0, int b = 0)
    {
        x = a;
        y = b;
    }

    Point operator+(const Point& p)
    {
        return Point(x + p.x, y + p.y);
    }

    void show()
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main()
{
    Point p1(2, 3);
    Point p2(4, 5);

    Point p3 = p1 + p2;

    cout << "p1 = ";
    p1.show();

    cout << "p2 = ";
    p2.show();

    cout << "p1 + p2 = ";
    p3.show();

    return 0;
}
#include <iostream>

using namespace std;

class IShape
{
public:
    virtual ~IShape()
    {
        cout << "Destructor IShape" << endl;
    }

    virtual void Draw() = 0;
};

class Circle : public IShape
{
public:
    ~Circle()
    {
        cout << "Destructor Circle" << endl;
    }

    void Draw()
    {
        cout << "Draw Circle" << endl;
    }
};

int main()
{
    IShape* p = new Circle();

    delete p;

    return 0;
}
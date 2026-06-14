class IShape
{
public:
    virtual void Draw() = 0;
};

class Shape
{
protected:
    int color;

public:
    virtual void Draw() = 0;

    void ShowColor()
    {
        cout << color;
    }
};
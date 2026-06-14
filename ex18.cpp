#include <iostream>
#include <cmath>

using namespace std;

class Equation
{
public:
    virtual void roots() = 0;
};

class LinearEquation : public Equation
{
private:
    double a, b;

public:
    LinearEquation(double aa, double bb)
    {
        a = aa;
        b = bb;
    }

    void roots()
    {
        if (a == 0)
            cout << "No solution" << endl;
        else
            cout << "x = " << -b / a << endl;
    }
};

class QuadraticEquation : public Equation
{
private:
    double a, b, c;

public:
    QuadraticEquation(double aa, double bb, double cc)
    {
        a = aa;
        b = bb;
        c = cc;
    }

    void roots()
    {
        double D = b * b - 4 * a * c;

        if (D < 0)
        {
            cout << "No real roots" << endl;
        }
        else if (D == 0)
        {
            double x = -b / (2 * a);
            cout << "x = " << x << endl;
        }
        else
        {
            double x1 = (-b + sqrt(D)) / (2 * a);
            double x2 = (-b - sqrt(D)) / (2 * a);

            cout << "x1 = " << x1
                 << "  x2 = " << x2
                 << endl;
        }
    }
};

int main()
{
    Equation* eq[2];

    LinearEquation l(2, -8);
    QuadraticEquation q(1, -5, 6);

    eq[0] = &l;
    eq[1] = &q;

    for (int i = 0; i < 2; i++)
        eq[i]->roots();

    return 0;
}
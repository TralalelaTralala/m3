#include <iostream>

using namespace std;

class Student
{
private:
    string name;

public:
    Student(string n)
    {
        name = n;
    }

    Student(const Student& s)
    {
        name = s.name;
    }

    void show()
    {
        cout << name << endl;
    }
};

void Print(Student s)
{
    s.show();
}

int main()
{
    Student st("Ivan");

    Print(st);

    return 0;
}
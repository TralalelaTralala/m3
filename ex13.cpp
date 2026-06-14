#include <iostream>

using namespace std;

class Student
{
public:
    string name;

    Student(string n)
    {
        name = n;
    }
};

Student CreateStudent()
{
    Student s("Ivan");
    return s;
}

int main()
{
    Student st = CreateStudent();

    cout << st.name;

    return 0;
}
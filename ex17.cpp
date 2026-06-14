#include <iostream>
#include <stack>
#include <string>

using namespace std;

template <class T>
class MyStack
{
private:
    stack<T> st;

public:
    void push(T value)
    {
        st.push(value);
    }

    void show()
    {
        stack<T> temp = st;

        while (!temp.empty())
        {
            cout << temp.top() << endl;
            temp.pop();
        }
    }

    T longestString()
    {
        stack<T> temp = st;

        T longest = temp.top();

        while (!temp.empty())
        {
            if (temp.top().length() > longest.length())
                longest = temp.top();

            temp.pop();
        }

        return longest;
    }
};

int main()
{
    MyStack<string> s;

    s.push("Hello");
    s.push("Programming");
    s.push("C++");
    s.push("University");

    cout << "Stack:" << endl;
    s.show();

    cout << "\nLongest string: "
         << s.longestString()
         << endl;

    return 0;
}
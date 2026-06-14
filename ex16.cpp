#include <iostream>

using namespace std;

template <class T>
class CircularList
{
private:
    struct Node
    {
        T data;
        Node* next;
    };

    Node* head;

public:
    CircularList()
    {
        head = NULL;
    }

    void add(T value)
    {
        Node* newNode = new Node;
        newNode->data = value;

        if (head == NULL)
        {
            head = newNode;
            newNode->next = head;
        }
        else
        {
            Node* temp = head;

            while (temp->next != head)
                temp = temp->next;

            temp->next = newNode;
            newNode->next = head;
        }
    }

    void remove(T value)
    {
        if (head == NULL)
            return;

        Node *cur = head, *prev = NULL;

        do
        {
            if (cur->data == value)
            {
                if (prev == NULL)
                {
                    Node* last = head;

                    while (last->next != head)
                        last = last->next;

                    if (head == head->next)
                    {
                        delete head;
                        head = NULL;
                    }
                    else
                    {
                        head = head->next;
                        last->next = head;
                        delete cur;
                    }
                }
                else
                {
                    prev->next = cur->next;
                    delete cur;
                }

                return;
            }

            prev = cur;
            cur = cur->next;

        } while (cur != head);
    }

    void show()
    {
        if (head == NULL)
        {
            cout << "List is empty\n";
            return;
        }

        Node* temp = head;

        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        while (temp != head);

        cout << endl;
    }

    int count()
    {
        if (head == NULL)
            return 0;

        int k = 0;
        Node* temp = head;

        do
        {
            k++;
            temp = temp->next;
        }
        while (temp != head);

        return k;
    }
};

int main()
{
    CircularList<int> list;

    list.add(10);
    list.add(20);
    list.add(30);
    list.add(40);

    cout << "List: ";
    list.show();

    cout << "Count = " << list.count() << endl;

    list.remove(20);

    cout << "After delete: ";
    list.show();

    cout << "Count = " << list.count() << endl;

    return 0;
}
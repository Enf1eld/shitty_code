#include <iostream>
#include <stdlib.h>

using namespace std;
struct Node
{
    int x;
    Node* Next;
};
class List
{
    Node* Head, *Tail;
    int size;
public:
    List() :Head(NULL), Tail(NULL), size(0) {};
    void Add(int x);
    void Show(int size);
    int Count()
};
int List::Count()
{
    return size;
}
void List::Add(int x)
{
    size++;
    Node* temp = new Node;
    temp->Next = Head;
    temp->x = x; if (Head != NULL)
    {
        Tail->Next = temp;
        Tail = temp;
    }
    else Head = Tail = temp;
}
void List::Show(int size)
{
    Node* tempHead = Head;
    int temp = size;
    while (temp != 0)
    {
        cout << tempHead->x << " ";
        tempHead = tempHead->Next;
        temp--;
    }
}
int main()
{
    int N, num;
    cout << "Input number of elements you want to have in list\n";
    cin >> N;
    List massive;
    cout << "Input mass elements\n";
    for (int i = 0; i < N; i++)
    {
        cin >> num;
        massive.Add(num);
    }
    cout << "Here is your main mass:\n";
    massive.Show(massive.Count());
    int deletable;
    cout << "Inpute what to delete";
    cin >> deletable;
    massive[deletable] = NULL;
    //На протяжении всего этого задания мне хотелось умереть и написать .pop
}
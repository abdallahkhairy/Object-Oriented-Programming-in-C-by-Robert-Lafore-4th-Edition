#include <iostream>
#include "Queue.h"
using namespace std;
int main()
{
    Queue q;
    int value, po;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter value to push on queue" << endl;
        cin >> value;
        q.enqueue(value);
    }
    q.display();
    /*cout << "count is " << q.count() << endl;
    po = q.dequeue();
    q.display();
    cout << "po is " << po << endl;
    po = q.dequeue();
    q.display();
    cout << "po is " << po << endl;
    cout << "count is " << q.count() << endl;*/
    q.clear();
    q.display();
}
 
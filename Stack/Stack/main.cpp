#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
    Stack s;
    int value , po;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter value to push on stack" << endl;
        cin >> value;
        s.push(value);
    }
    s.display();
    cout << "count is " << s.count() << endl;
    po = s.pop();
    s.display();
    cout << "po is "<< po << endl;
    cout << "count is " << s.count() << endl;
    
}


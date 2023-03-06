#include <iostream> 
#include "LinkedList.h"
using namespace std;
 
int main()
{
    LinkedList lst;
    if (lst.is_empty())cout << "List is Empty" << endl;
    else cout << "Contains " << lst.count() << endl;
    int value;
    cout << "Insert item to the list \n";
    cin >> value;
    lst.insert_first(value);
    lst.display();
    cout << "Insert item to the list \n";
    cin >> value;
    lst.insert_first(value);
    lst.display();
    cout << "Insert item to the list \n";
    cin >> value;
    lst.insert_first(value);
    lst.display();
    /*cout << "Contains " << lst.count() << endl;
    cout << "Insert item to find in the list \n";
    cin >> value;
    lst.is_found(value) ? cout << "Found" << endl: cout << "Not Found" << endl;
    cout << "Insert the before item and the item to insert before the list \n";
    int nvalue;
    cin >> value >> nvalue;
    lst.insert_before(value, nvalue);
    lst.display();*/
    lst.append(5);
    lst.display();
    lst.delete_node(20);
    lst.display();

}



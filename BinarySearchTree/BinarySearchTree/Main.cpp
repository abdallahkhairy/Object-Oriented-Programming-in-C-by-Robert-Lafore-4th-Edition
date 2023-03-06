#include <iostream>
using namespace std;
#include "BST.h"

int main()
{
	//45, 15, 79, 90, 10, 55, 12, 20, 50
	BST btree;
	btree.insert(45);
	btree.insert(15);
	btree.insert(79);
	btree.insert(90);
	btree.insert(10);
	btree.insert(55);
	btree.insert(12);
	btree.insert(20);
	btree.insert(50);

	cout << " Display the Tree Contenet \n";
	btree.preorder(btree.root);
	/*cout << "\n..............................................................................\n";
	btree.Inorder(btree.root);
	cout << "\n..............................................................................\n";
	btree.Postorder(btree.root);
	cout << "\n..............................................................................\n";*/

	/*int key;
	cout << " Enter item to search for \n";
	cin >> key;
	if (btree.Search(key))
		cout << "Item Found \n";
	else
		cout << "Sorry , item not found \n";*/

		//cout << "Find Minimum \n";
		//Node *min = btree.Findmin(btree.root);
		//if (min == 0) // NULL = 0
		//	cout << "No Items Exist";
		//else
		//	cout << "Minimum is  " << min->data << "\n";

		//cout << "Find Maximum \n";
		//Node* max = btree.Findmax(btree.root);
		//if (max == 0)
		//	cout << "No Items Exist \n";
		//else
		//	cout << "Maximum is  " << max->data << "\n";

	cout << " \n Delete Items \n ";
	Node* result = btree.delete_bst(btree.root, 12);
	cout << "\n preorder After Delete 12 \n ";
	btree.preorder(result);

	result = btree.delete_bst(btree.root, 15);
	cout << "\n preorder After Delete 15 \n ";
	btree.preorder(result);

}


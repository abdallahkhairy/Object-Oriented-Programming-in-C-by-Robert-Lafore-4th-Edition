#include <iostream>
using namespace std;

int main()
{
	//45, 15, 79, 90, 10, 55, 12, 20, 50
	BST btree;
	btree.Insert(45);
	btree.Insert(15);
	btree.Insert(79);
	btree.Insert(90);
	btree.Insert(10);
	btree.Insert(55);
	btree.Insert(12);
	btree.Insert(20);
	btree.Insert(50);

	cout << " Display the Tree Contenet \n";
	btree.Preorder(btree.root);
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
	Node* result = btree.Delete(btree.root, 12);
	cout << "\n preorder After Delete 12 \n ";
	btree.Preorder(result);

	result = btree.Delete(btree.root, 15);
	cout << "\n preorder After Delete 15 \n ";
	btree.Preorder(result);


}
}


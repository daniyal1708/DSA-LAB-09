
#include "Tree.cpp"
using namespace std;

int main()
{
    TreeType<int> binarySearchTree;

    // Inserting Values
    binarySearchTree.insertItem(45);
    binarySearchTree.insertItem(30);
    binarySearchTree.insertItem(60);
    binarySearchTree.insertItem(20);
    binarySearchTree.insertItem(40);
    binarySearchTree.insertItem(50);
    binarySearchTree.insertItem(75);
    binarySearchTree.insertItem(48);
    binarySearchTree.insertItem(55);
    binarySearchTree.insertItem(85);

    bool found;

    cout << "========== TASK 01 ==========" << endl;

    // Search 48
    binarySearchTree.retrieveItem(48, found);
    if (found)
    {
        cout << "48 Found in BST" << endl;
    }
    else
    {
        cout << "48 Not Found in BST" << endl;
    }

    // Search 30
    binarySearchTree.retrieveItem(30, found);
    if (found)
    {
        cout << "30 Found in BST" << endl;
    }
    else
    {
        cout << "30 Not Found in BST" << endl;
    }

    // Search 90
    binarySearchTree.retrieveItem(90, found);
    if (found)
    {
        cout << "90 Found in BST" << endl;
    }
    else
    {
        cout << "90 Not Found in BST" << endl;
    }

    cout << endl;
    cout << "========== TASK 02 ==========" << endl;

    // Path Display
    binarySearchTree.printPath(48);
    binarySearchTree.printPath(30);
    binarySearchTree.printPath(90);

    return 0;
}

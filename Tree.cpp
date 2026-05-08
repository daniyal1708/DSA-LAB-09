
#include "Tree.h"

// Constructor
template <class ItemType>
TreeType<ItemType>::TreeType()
{
    root = NULL;
}

// Destructor
template <class ItemType>
TreeType<ItemType>::~TreeType()
{
    destroyHelper(root);
}

// Destroy Tree
template <class ItemType>
void TreeType<ItemType>::destroyHelper(TreeNode<ItemType>* tree)
{
    if (tree != NULL)
    {
        destroyHelper(tree->left);
        destroyHelper(tree->right);
        delete tree;
    }
}

// Check Empty
template <class ItemType>
bool TreeType<ItemType>::isEmpty() const
{
    return (root == NULL);
}

// Insert Function
template <class ItemType>
void TreeType<ItemType>::insertItem(ItemType item)
{
    insertHelper(root, item);
}

// Insert Helper
template <class ItemType>
void TreeType<ItemType>::insertHelper(TreeNode<ItemType>*& tree, ItemType item)
{
    if (tree == NULL)
    {
        tree = new TreeNode<ItemType>;
        tree->info = item;
        tree->left = NULL;
        tree->right = NULL;
    }
    else if (item < tree->info)
    {
        insertHelper(tree->left, item);
    }
    else if (item > tree->info)
    {
        insertHelper(tree->right, item);
    }
}

// Retrieve Function
template <class ItemType>
void TreeType<ItemType>::retrieveItem(ItemType item, bool& found)
{
    retrieveHelper(root, item, found);
}

// Retrieve Helper
template <class ItemType>
void TreeType<ItemType>::retrieveHelper(TreeNode<ItemType>* tree, ItemType item, bool& found)
{
    if (tree == NULL)
    {
        found = false;
    }
    else if (item < tree->info)
    {
        retrieveHelper(tree->left, item, found);
    }
    else if (item > tree->info)
    {
        retrieveHelper(tree->right, item, found);
    }
    else
    {
        found = true;
    }
}

// Print Path Function
template <class ItemType>
void TreeType<ItemType>::printPath(ItemType item)
{
    bool found = false;
    cout << "Path: ";
    printPathHelper(root, item, found);

    if (found)
    {
        cout << "Found!" << endl;
    }
    else
    {
        cout << "NULL -> Not Found!" << endl;
    }
}

// Path Helper
template <class ItemType>
void TreeType<ItemType>::printPathHelper(TreeNode<ItemType>* tree, ItemType item, bool& found)
{
    if (tree == NULL)
    {
        found = false;
        return;
    }

    cout << tree->info << " -> ";

    if (item == tree->info)
    {
        found = true;
        return;
    }
    else if (item < tree->info)
    {
        printPathHelper(tree->left, item, found);
    }
    else
    {
        printPathHelper(tree->right, item, found);
    }
}

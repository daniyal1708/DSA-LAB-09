
#pragma once
#include <iostream>
#include <fstream>
using namespace std;

// Node Structure
template <class ItemType>
struct TreeNode
{
    ItemType info;
    TreeNode<ItemType>* left;
    TreeNode<ItemType>* right;
};

// BST Class
template <class ItemType>
class TreeType
{
private:
    TreeNode<ItemType>* root;

    void insertHelper(TreeNode<ItemType>*& tree, ItemType item);
    void retrieveHelper(TreeNode<ItemType>* tree, ItemType item, bool& found);
    void destroyHelper(TreeNode<ItemType>* tree);
    void printPathHelper(TreeNode<ItemType>* tree, ItemType item, bool& found);

public:
    TreeType();
    ~TreeType();

    bool isEmpty() const;

    void insertItem(ItemType item);
    void retrieveItem(ItemType item, bool& found);
    void printPath(ItemType item);
};

#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

#include <cstddef>
#include <iostream>

using namespace std;
typedef int datatype;

struct Node {
    datatype key;

    Node *parent = NULL;
    Node *left = NULL;
    Node *right = NULL;
};

extern Node* pNode;
void CreateTree(Node*& pNode, int n);
void ShowTree(Node*& pNode, int L);
void PrefixOrder(Node*& pNode);
void PostfixOrder(Node*& pNode);
void InfixOrder(Node*& pNode);
bool SearchNodeBST(Node* pNode, datatype key);
Node* CreateRootBST(datatype key);
Node* InsertNodeBST(Node*& root, datatype key);
Node* SuccessorNodeBST(Node* pNode);
Node* PredecessorNodeBST(Node* pNode);
Node* MinimumNodeBST(Node* pNode);
Node* MaximumNodeBST(Node* pNode);
Node* DeleteNodeBST(Node*& delNode, datatype key);


#endif // TREE_H_INCLUDED

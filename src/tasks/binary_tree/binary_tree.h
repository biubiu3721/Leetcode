#ifndef __BINARY_TREE__
#define __BINARY_TREE__

#include <iostream>
#include <cstring>
#include <cassert>
#include <vector>

/**
 * @brief 1. Define Node.
 *        2. Create By DLR recursively.
 *        3. Traveral recursively.
 * 
 */


struct TreeNode
{
    int val;
    struct TreeNode *p_left;
    struct TreeNode *p_right;
};

TreeNode* CreateBinTree();
void InitBinTree(TreeNode *p_tree);
void PreOrder(TreeNode *p_tree);
void MidOrder(TreeNode *p_tree);
void PostOrder(TreeNode *p_tree);
void LevelOrderArr(TreeNode *p_tree);
void LevelOrderVec(TreeNode *p_tree);

#endif // __BINARY_TREE__
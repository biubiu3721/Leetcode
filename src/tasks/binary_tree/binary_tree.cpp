#include "./binary_tree.h"



TreeNode* CreateBinTree()
{
    // PreOrder Create.
    TreeNode * p_tree;
    int get_val;
    scanf("%d", &get_val);
    if(get_val == 0)
    {
        p_tree == NULL;
    }
    else
    {
        p_tree = (TreeNode*)malloc(sizeof(TreeNode));
        p_tree->p_left = NULL;
        p_tree->p_right = NULL;
        if(p_tree == NULL)
        { 
            // Failed to alloc.
            exit(0);
        }
        else
        {
            // Success to alloc.
            p_tree->val = get_val;
            p_tree->p_left = CreateBinTree();
            p_tree->p_right = CreateBinTree();
        }
    }
    return p_tree;
}
void InitBinTree(TreeNode *p_tree)
{
    p_tree = NULL;
}
void PreOrder(TreeNode * p_tree)
{
    if(!p_tree)
    {
        return;
    }
    std::cout << p_tree->val << " -> ";
    PreOrder(p_tree->p_left);
    PreOrder(p_tree->p_right);

}
void MidOrder(TreeNode * p_tree)
{
    if(!p_tree)
    {
        MidOrder(p_tree->p_left);
        std::cout << p_tree->val << " -> ";
        MidOrder(p_tree->p_right);
    }
}
void PostOrder(TreeNode * p_tree)
{
    if(!p_tree)
    {
        PostOrder(p_tree->p_left);
        PostOrder(p_tree->p_right);
        std::cout << p_tree->val << " -> ";
    }
}
void LevelOrderArr(TreeNode * p_tree)
{
    TreeNode * tree_array[100];
    int in = 0; // Children list.
    int out = 0; // Parent list.
    tree_array[in++] = p_tree;
    while(in > out)
    {
        if(tree_array[out])
        {
            std::cout << tree_array[out]->val << " -> ";
            tree_array[in++] = tree_array[out]->p_left;
            tree_array[in++] = tree_array[out]->p_right;
        }
        out++;
    }

}
void LevelOrderVec(TreeNode * p_tree)
{
    // Check and Init.
    if(p_tree == NULL)
    {
        return;
    }
    std::vector<TreeNode*> tree_vec;
    tree_vec.push_back(p_tree);
    while(tree_vec.size() > 0)
    {
        std::cout << tree_vec[0]->val << " -> ";
        if(tree_vec[0]->p_left != NULL)
        {
            tree_vec.push_back(tree_vec[0]->p_left); 
        }
        if(tree_vec[0]->p_right != NULL)
        {
            tree_vec.push_back(tree_vec[0]->p_right); 
        }
        tree_vec.erase(tree_vec.begin()); // Pop Front.
        
    }
}
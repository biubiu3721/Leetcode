

#include "../src/tasks/task.h"

int case1()
{
    TreeNode * T;
    InitBinTree(T);
    T = CreateBinTree();
    std::cout << "Pre Order Traveral" << std::endl;
    PreOrder(T);
    std::cout << std::endl;
    std::cout << "Mid Order Traveral" << std::endl;
    MidOrder(T);
    std::cout << std::endl;
    std::cout << "Post Order Traveral" << std::endl;
    PostOrder(T);
    std::cout << std::endl;
    std::cout << "Level Order Traveral" << std::endl;
    LevelOrderVec(T);
    std::cout << std::endl;
    return 0;
}
int case2()
{
    return 0;
}


int main()
{
    case1();
    case2();
}

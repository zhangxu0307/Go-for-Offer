#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};


void Mirror(TreeNode *pRoot)
{
    // 第一个条件是防范输入的是NULL，有可能是一开始就是空节点或者递归到叶子下一层变成NULL节点
    // 后面的是递归出口条件，代表已经遍历到了叶子结点，无子节点供交换
    if(pRoot == NULL || (pRoot->right == NULL && pRoot->left == NULL))
        return;

    TreeNode *tmp = pRoot->left;
    pRoot->left = pRoot->right;
    pRoot->right = tmp;


    Mirror(pRoot->left);
    Mirror(pRoot->right);

    return;

}

int main() {
    TreeNode *root1 = new TreeNode(8);
    TreeNode *n1 = new TreeNode(8);
    TreeNode *n2 = new TreeNode(7);
    TreeNode *n3 = new TreeNode(9);
    TreeNode *n4 = new TreeNode(2);
    TreeNode *n5 = new TreeNode(4);
    TreeNode *n6 = new TreeNode(7);

    root1->left = n1;
    root1->right = n2;
    n1->left = n3;
    n1->right = n4;
    n4->left = n5;
    n4->right = n6;

    Mirror(root1);

}
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


bool tree1HasTree2(TreeNode* pRoot1, TreeNode* pRoot2)
{
    if(pRoot2 == NULL) // 候选子结构已经用完，代表tree1中有tree2
        return true;
    if(pRoot1 == NULL) // tree1用完，tree2还没有用完，tree1不存在子结构
        return false;
    if(pRoot1->val != pRoot2->val) // 值不同，肯定不是子结构
        return false;
    return tree1HasTree2(pRoot1->left, pRoot2->left) && tree1HasTree2(pRoot1->right, pRoot2->right);
}

bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
{
    bool result = false;
    // 递归出口条件，如果proot2为空，约定空不是任意树的子结构
    // 如果proot1为空，tree1已经递归完毕，说明没有从最顶的root节点开始没有出现与proot2值相同的根节点
    if(pRoot1 != NULL && pRoot2 != NULL)
    {
        if(pRoot1->val == pRoot2->val) // 找相同根节点
            result = tree1HasTree2(pRoot1, pRoot2);
        if(!result)
            result = HasSubtree(pRoot1->left, pRoot2);
        if(!result)
            result = HasSubtree(pRoot1->right, pRoot2);
    }

    return result;
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

    TreeNode *root2 = new TreeNode(8);
    TreeNode *p1 = new TreeNode(9);
    TreeNode *p2 = new TreeNode(2);
    root2->left = p1;
    root2->right = p2;

    bool ans = HasSubtree(root1, root2);
    cout<<ans<<endl;

}
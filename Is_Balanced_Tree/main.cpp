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

bool IsBalanced(TreeNode* pRoot, int &depth)
{
    if(pRoot == NULL)
    {
        depth = 0;
        return true;
    }

    int left,right;
    if(IsBalanced(pRoot->left, left) && IsBalanced(pRoot->right, right))
    {
        int diff = left-right;
        if(diff <= 1 && diff >= -1)
        {
            depth = 1+(left>right ? left:right);
            return true;
        }
    }

    return false;

}

bool IsBalanced_Solution(TreeNode* pRoot)
{
    int depth = 0;
    return IsBalanced(pRoot, depth);
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

    bool ans = IsBalanced_Solution(root1);
    cout<<ans<<endl;

}
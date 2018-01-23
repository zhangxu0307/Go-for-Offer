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


int TreeDepth(TreeNode* pRoot)
{
    if(pRoot == NULL)
		return 0;
	int leftDepth = TreeDepth(pRoot->left);
	int rightDepth = TreeDepth(pRoot->right);

	return (leftDepth>rightDepth) ? (leftDepth+1):(rightDepth+1);
}

void TreeDepthCore(TreeNode* pNode, int currDep, int &maxDep)
{

	if(pNode->right == NULL && pNode->left == NULL)
	{
		if(currDep > maxDep)
			maxDep = currDep;
		return;
	}
	if (pNode->left != NULL)
		TreeDepthCore(pNode->left, currDep+1, maxDep);
	if (pNode->right != NULL)
		TreeDepthCore(pNode->right, currDep+1, maxDep);
}


int TreeDepthv2(TreeNode* pRoot)
{
	if(pRoot == NULL)
		return 0;
	int maxDep = -10000;
	int currDep = 0;
	TreeDepthCore(pRoot, currDep, maxDep);
	return maxDep+1;
}

int main() {

//	TreeNode *n1 = new TreeNode(1);
//	TreeNode *n2 = new TreeNode(2);
//	TreeNode *n3 = new TreeNode(3);
//	TreeNode *n4 = new TreeNode(4);
//	TreeNode *n5 = new TreeNode(5);
//	TreeNode *n6 = new TreeNode(6);
//	n1->left = n2;
//	n1->right = n3;
//	n2->left = n4;
//	n2->right = n5;
//	n5->right = n6;

	TreeNode *n1 = NULL;

	//int ans = TreeDepth(n1);
	int ans = TreeDepthv2(n1);
	cout<<ans<<endl;

}
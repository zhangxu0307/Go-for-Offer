#include<iostream>
#include<vector>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// 打印vector内容
void printArray(const vector<int> &data)
{
	for (int i = 0; i < data.size(); i++)
		cout << data[i] << " ";
	cout << endl;
}

void preOreder(TreeNode *root)
{
	cout << root->val << " ";
	if (root->left != NULL)
		preOreder(root->left);
	if (root->right != NULL)
		preOreder(root->right);

}

TreeNode* rebuildTree(vector<int> pre, vector<int> vin, int startPre, int endPre, int startIn, int endIn)
{
	if (startPre > endPre || startIn > endIn)
	{
		return NULL;
	}

	int rootVal = pre[startPre];
	TreeNode* root = new TreeNode(rootVal);

	int i = startIn;
	while (i <= endIn)
	{
		if (rootVal == vin[i])
			break;
		else
			i++;
	}

	int leftLength = i-startIn; // 左子树长度
	int ritghtLength = (endIn - startIn + 1) - leftLength - 1; //

	/*int newstartPre = startPre + 1;
	int newendPre = startPre + leftLength;
	int newstartIn = startIn;
	int newendIn = startIn + leftLength - 1;*/

	root->left = rebuildTree(pre, vin, startPre + 1, startPre + leftLength, startIn, startIn + leftLength - 1);

	/*newstartPre = startPre + leftLength + 1;
	newendPre = endPre;
	newstartIn = startIn + leftLength + 1;
	newendIn = endIn;*/

	root->right = rebuildTree(pre, vin, startPre + leftLength + 1, endPre, startIn + leftLength + 1, endIn);

	return root;

}


TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin)
{
	return rebuildTree(pre, vin, 0, pre.size() - 1, 0, vin.size() - 1);
}

int main()
{
	int preArr[] = { 1,2,4,7,3,5,6,8 };
	vector<int> pre(preArr, preArr + 8);
	int inArr[] = { 4,7,2,1,5,3,8,6 };
	vector<int> vin(inArr, inArr + 8);
	printArray(pre);
	printArray(vin);
	TreeNode* root = reConstructBinaryTree(pre, vin);
	preOreder(root);



}



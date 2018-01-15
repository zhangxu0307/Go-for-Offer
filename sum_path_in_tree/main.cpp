#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};

void findPathCore(TreeNode *node, int sum, vector<int> path,  vector<vector<int> > &totalPath, int expectNumber)
{
    if(node == NULL)
        return;

    sum += node->val;
    path.push_back(node->val);

    if(node->left == NULL && node->right == NULL)
    {
        if (sum == expectNumber)
        {
            totalPath.push_back(path);
            return;
        }

    }

    findPathCore(node->left, sum, path, totalPath, expectNumber);
    findPathCore(node->right, sum, path, totalPath, expectNumber);

    sum -= node->val; // 回溯，但其实并不必要
    path.pop_back();
}


vector<vector<int> > FindPath(TreeNode* root,int expectNumber)
{
    vector<int> path;
    vector<vector<int> > totalPath;
    int sum = 0;
    findPathCore(root, sum, path, totalPath, expectNumber);
    return totalPath;

}


int main() {

    TreeNode *root1 = new TreeNode(10);
    TreeNode *n1 = new TreeNode(5);
    TreeNode *n2 = new TreeNode(12);
    TreeNode *n3 = new TreeNode(4);
    TreeNode *n4 = new TreeNode(7);


    root1->left = n1;
    root1->right = n2;
    n1->left = n3;
    n1->right = n4;


    int expectNumber = 22;

    vector<vector<int> >ans =  FindPath(root1,expectNumber);

    for(int i = 0;i < ans.size();i++)
    {
        for(int j = 0; j < ans[i].size();j++)
            cout<<ans[i][j]<<" ";
        cout<<endl;
    }


}
#include <iostream>
#include <vector>
#include <deque>
using namespace std;

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};

vector<int> PrintFromTopToBottom(TreeNode* root)
{

    deque<TreeNode *> queue;
    vector<int> ans;
    queue.push_back(root);
    while(!queue.empty())
    {
        TreeNode *p = queue.front();
        if(p == NULL) // 防止空节点传入
            break;
        ans.push_back(p->val);
        if(p->left)
            queue.push_back(p->left);
        if(p->right)
            queue.push_back(p->right);
        queue.pop_front();

    }
    return ans;
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

    vector<int> ans = PrintFromTopToBottom(root1);
    for(int i = 0; i < ans.size();i++)
        cout<<ans[i]<<endl;

}
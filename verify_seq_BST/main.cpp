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

bool  VerifySquenceOfBSTCore(vector<int> sequence, int start, int end)
{
    if(sequence.empty())
        return false;

    int rootVal = sequence[end];

    int i = start;  // 寻找gap点
    for(;i < end;i++) // 这里没有等号，因为end点是根节点了
    {
        if(sequence[i] > rootVal)
            break;
    }

    for(int j = i;j < end;j++) // 只需要扫一遍gap点右边的即可
    {
        if(sequence[j] < rootVal)
            return false;
    }

    // 边界是start==end，此时left和right默认都是true
    bool left = true;
    if(i > start)
        left = VerifySquenceOfBSTCore(sequence, start, i-1);

    bool right = true;
    if(i < end-1)
        right = VerifySquenceOfBSTCore(sequence, i, end-1);

    return left && right;
}


bool VerifySquenceOfBST(vector<int> sequence)
{
    return VerifySquenceOfBSTCore(sequence, 0, sequence.size()-1);

}

int main() {

    int a[] = {5,7,6,9,11,10,8};
    vector<int> sq1(a, a+7);
    int a2[] = {7,4,6,5};
    vector<int> sq2(a2, a2+4);
    bool ans = VerifySquenceOfBST(sq2);
    cout<<ans<<endl;
}
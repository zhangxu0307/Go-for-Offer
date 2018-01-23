#include <iostream>
#include <vector>
using namespace std;


vector<int> returnSeq(int small, int big)
{
    vector<int> seq;
    for(int i = small; i <= big;i++)
        seq.push_back(i);
    return seq;
}


vector< vector<int> > FindContinuousSequence(int sum)
{
    int small = 1;
    int big = 2;
    int mid = (1+sum)/2; // 至少两个数，因此small不能超过这个平均值
    int currSum = small+big;

    vector< vector<int> > ans;

    while(small < mid)
    {
        if(currSum == sum)
            ans.push_back(returnSeq(small, big));

        while(currSum > sum && small < mid) // 先移动small试探
        {
            currSum -= small;
            small++;
            if(currSum == sum)
                ans.push_back(returnSeq(small, big));
        }

        big++; // 移动big试探
        currSum += big;

    }

    return ans;

}

int main() {

    vector< vector<int> > ans = FindContinuousSequence(15);

    for(int i = 0; i < ans.size();i++)
    {
        for(int j = 0; j < ans[i].size(); j++)
            cout<<ans[i][j]<<" ";
        cout<<endl;
    }



}
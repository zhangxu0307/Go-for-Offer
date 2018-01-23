#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> FindNumbersWithSum(vector<int> array,int sum)
{
    unordered_map<int, int> d;
    vector<int> ans;
    for(int i = 0; i < array.size();i++)
    {
        if(d[array[i]])
        {
            ans.push_back(array[i]);
            ans.push_back(sum-array[i]);
            return ans;
        }
        int other = sum-array[i];
        d[other] = 1;
    }

    ans.push_back(-1);
    ans.push_back(-1);
    return ans;

}

int main() {
    int a[] = {1,2,9,4,8};
    vector<int> v(a,a+5);
    vector<int> ans = FindNumbersWithSum(v, 22);
    cout<<ans[0]<<" "<<ans[1]<<endl;
}
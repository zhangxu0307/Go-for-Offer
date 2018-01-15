#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;




void PermutationCore(string str, int start, vector<string> &ans)
{
    if(start == str.size()-1)
        ans.push_back(str);
    for(int i = start;i < str.size();i++)
    {
        if(i!= start && str[start] == str[i]) // 去重，如果不是同一下标，且相同字符，无必要交换
            continue;

        swap(str[start],str[i]);
        PermutationCore(str, start+1, ans);
        swap(str[i],str[start]); // 回溯


    }
}

vector<string> Permutation(string str)
{
    vector<string> ans;
    PermutationCore(str, 0, ans);
    sort(ans.begin(),ans.end());
    return ans;
}

int main() {
    string s = "aa";
    vector<string> ans = Permutation(s);
    for(int i = 0;i<ans.size();i++)
        cout<<ans[i]<<endl;
}
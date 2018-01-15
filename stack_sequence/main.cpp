#include <iostream>
#include <stack>
#include <vector>
using namespace std;

bool IsPopOrder(vector<int> pushV,vector<int> popV)
{
    if(pushV.size() != popV.size()) // 长度不一致直接false
        return false;

    int len = pushV.size();
    stack<int> s;
    int pPush = 0;
    int pPop = 0;

    while(pPop < len) // 弹出序列还未遍历完，执行循环
    {
        while(s.empty() || s.top() != popV[pPop]) // 栈空或者栈顶元素不是要弹出的那个，则需继续压栈
        {
            if(pPush == len) // 压栈序列用完，此时弹出序列还未用完，跳出循环
                break;
            s.push(pushV[pPush]);
            pPush++;
        }
        if(popV[pPop] != s.top()) // 栈顶元素与弹出的元素不一致
            break;
        s.pop();
        pPop++;
    }

    if(s.empty() && (pPop == len)) // 栈中全部元素都被弹出，且弹出序列用尽
        return true;
    else
        return false;
}



int main() {
    int a1[] = {1,2,3,4,5};
    vector<int> pushV(a1, a1+5);
    int a2[] = {4,5,3,2,1};
    vector<int> popV(a2, a2+5);
    int a3[] = {4,3,5,1,2};
    vector<int> popV2(a3, a3+5);
    bool ans = IsPopOrder(pushV, popV2);
    cout<<ans<<endl;

}
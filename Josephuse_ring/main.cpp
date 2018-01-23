#include <iostream>
#include <list>
using namespace std;

int LastRemaining_Solution(int n, int m)
{
    if(n < 1 || m < 1)
        return -1;

     // 构建约瑟夫环
    list<int> ring;
    for(int i = 0; i < n;i++)
        ring.push_back(i);

    list<int>::iterator curr = ring.begin();

    while(ring.size() > 1)
    {
        for(int i = 1; i < m;i++) // curr此时已指向第一个元素，从1开始遍历
        {
            curr++;
            if(curr == ring.end())
                curr = ring.begin();
        }

        list<int>::iterator next = ++curr; // 预先存住删除节点后的开始节点
        if (next == ring.end())
            next = ring.begin();

        curr--;
        ring.erase(curr); // 删除节点
        curr = next;
    }

    return (*curr);


}

int main() {

    int n = 5;
    int m = 3;
    int ans = LastRemaining_Solution(n, m);
    cout<<ans<<endl;
}
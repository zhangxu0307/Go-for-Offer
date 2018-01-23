#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool IsContinuous( vector<int> numbers )
{
    int len = numbers.size();
    if (len < 5)
        return false;

    sort(numbers.begin(), numbers.end());

    int zeroCount = 0;
    int gapCount = 0;

    for(int i = 0; i < len;i++) // 统计0的个数
    {
        if(numbers[i] == 0)
            zeroCount++;
    }


    for(int i = zeroCount; i < len-1;i++) // 0以外检查空缺数目
    {
        if(numbers[i] == numbers[i+1])
            return false;
        gapCount += numbers[i+1]-numbers[i]-1;
    }

    cout<<zeroCount<<endl;
    cout<<gapCount<<endl;

    if(gapCount <= zeroCount) // 0的个数只要超过gap即可
        return true;
    else
        return false;


}

int main() {

    int a[] = {3,0,0,0,0};
    vector<int> v(a, a+5);
    bool ans = IsContinuous(v);
    cout<<ans<<endl;
}
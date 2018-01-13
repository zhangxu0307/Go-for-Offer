#include <iostream>
using namespace std;

int  NumberOf1(int n)
{
    unsigned int flag = 1;
    int count = 0;
    while(flag)
    {
        if (n & flag)
            count++;
        flag = flag<<1;
    }
    return count;
}

int NumberOf1V2(int n)
{
    int count = 0;
    while(n)
    {
        count++;
        n = n&(n-1);
    }
    return count;
}

int main() {

    int num = 9;
    int ans = NumberOf1(num);
    cout<<ans<<endl;
    ans = NumberOf1V2(num);
    cout<<ans<<endl;

}
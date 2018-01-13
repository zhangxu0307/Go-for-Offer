#include <iostream>
using namespace std;

double powerCore(double base, int exponent)
{
    if(exponent == 0) // 除2到末尾会有两种情况，分别返回
        return 1;
    if(exponent == 1)
        return base;

    double res = powerCore(base, exponent>>1);
    res *= res;
    if(exponent&0x1) // 如果是奇数，还有乘一次base
        res *= base;
    return res;
}

double Power(double base, int exponent)
{
    if (exponent == 0)
        return 1;
    bool negFlag = false;
    if(exponent < 0)
    {
        negFlag = true;
        exponent = -exponent;
    }

    double res = powerCore(base, exponent);
    if (negFlag)
        res = 1/res;

    return res;

}

int main() {

    double base = 2;
    int exponent = 0;
    double ans = Power(base, exponent);
    cout<<ans<<endl;
}
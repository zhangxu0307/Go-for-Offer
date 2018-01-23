#include <iostream>
using namespace std;

int Add(int num1, int num2)
{
    int sum = 0;
    int carry = 0;
    do
    {
        sum = num1^num2;
        carry = (num1 & num2)<<1;

        num1 = sum;
        num2 = carry;
    }
    while(num2!=0);
    return num1;
}

int swapv1(int &num1,int &num2)
{
    num1 = num1+num2;
    num2 = num1-num2;
    num1 = num1-num2;
}

int swapv2(int &num1, int &num2)
{
    num1 = num1^num2;
    num2 = num1^num2;
    num1 = num1^num2;
}

int main() {

    int num1 = 2;
    int num2 = 1;
    int ans = Add(num1, num2);
    cout<<ans<<endl;
    //swapv1(num1,num2);
    swapv2(num1,num2);
    cout<<num1<<" "<<num2<<endl;

}
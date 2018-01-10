#include <iostream>
using namespace std;

int Fibonacciv1(int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    else
        return Fibonacciv1(n-1)+Fibonacciv1(n-2);
}

int Fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    int n0 = 0;
    int n1 = 1;
    int res = n0;
    for (int i = 0; i < n-1; i++)
    {
        res = n0 + n1;
        n0 = n1;
        n1 = res;
    }
    return res;

}



int main() {

    //int ans = Fibonacciv1(1);
    //cout<<ans<<endl;
    int ans = Fibonacci(39);
    cout<<ans<<endl;
}
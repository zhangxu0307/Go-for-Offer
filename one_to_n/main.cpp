#include <iostream>
#include<cstring>

using namespace std;

bool increamentOne(char *num)
{
    int numLength = strlen(num);
    int takeOver = 0;
    bool overflow = false;

    for(int i = numLength-1; i >= 0; i--)
    {
        int sum = num[i]-'0'+takeOver; // 除第一个数外，其余的都只加进位值
        if(i == numLength-1) // 第一个数加1
            sum++;

        if(sum >= 10)
        {
            if(i == 0)
                overflow = true; // 超出最大范围
            else
            {
                sum -= 10;
                takeOver = 1;
                num[i] = '0'+sum;
            }
        }
        else
        {
            num[i] = sum+'0';
            break; // 不存在进位，后面无须继续计算
        }

    }
    return overflow;

}

void printNumber(char *num)
{
    bool beginZero = true;
    for(int i = 0; i < strlen(num); i++)
    {
        if (beginZero && num[i] != '0') // 找不是0开头的
            beginZero = false;

        if(!beginZero)
            printf("%c", num[i]);
    }
    printf("\n");
}

void printOne2maxN_Number(int n)
{
    if (n <= 0)
        return;
    char *num = new char[n+1];
    memset(num, '0', n);
    num[n] = '\0';
    while(!increamentOne(num))
    {
        printNumber(num);
    }
    delete []num;

}


void printOne2maxN_NumberCore(char *num, int n, int index)
{
    if(index == n-1)
    {
        printNumber(num);
        return;
    }

    for(int i = 0; i < 10;i++)
    {
        num[index+1] = '0'+i;
        printOne2maxN_NumberCore(num, n, index+1);
    }
}


void printOne2maxN_Number_v2(int n)
{
    if(n < 0)
        return;
    char *num = new char[n+1];
    num[n] = '\0';

    for(int i = 0;i < 10;i++)
    {
        num[0] = '0'+i;
        printOne2maxN_NumberCore(num, n, 0);
    }

    delete []num;

}



int main() {
    int n = 2;
    //printOne2maxN_Number(n);
    printOne2maxN_Number_v2(n);
}
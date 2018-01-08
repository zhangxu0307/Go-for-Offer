#include<iostream>
using namespace std;

void replaceSpace(char *str,int length)
{
    if(str == NULL || length < 0)
        return;
    int originLen = 0;
    int blankNum = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        originLen++; // 注意，这个长度是除了'\0'的，但是数组下标从0开始，因此p1指针指向的还是'\0'位置
        if (str[i] == ' ')
            blankNum++;
        i++;
    }

    int newStringLen = originLen + 2*blankNum;
    if (newStringLen > length)
        return;
    int p1 = originLen;
    int p2 = newStringLen;

    while (p1 >= 0 && p2 > p1)
    {
        if (str[p1] == ' ')
        {
            str[p2--] = '0';
            str[p2--] = '2';
            str[p2--] = '%';
        }
        else
            str[p2--] = str[p1];
        p1--;
    }

}

int main()
{
    char *str = "a e   ";
    str[3] = '\0';
    replaceSpace(str, 5);
    cout<<str<<endl;

}

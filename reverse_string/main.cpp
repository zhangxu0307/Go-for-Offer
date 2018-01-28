#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void reverse(char *str, int begin, int end)
{
    while(begin <= end)
    {
        char tmp = str[begin]; // 首尾依次交换，就是翻转
        str[begin] = str[end];
        str[end] = tmp;

        begin++;
        end--;
    }
}


string ReverseSentence(char *strArr)
{

    int index = 0;
    // 获取字符串数组的长度
    while (strArr[index] != '\0')
    {
        index++;
    }
    // index指向最后一个有效字符，index是长度，不包括'\0'，index--就变成了最后一个有效字符
    index--;
    reverse(strArr, 0, index);

    int pBegin = 0;
    int pEnd = 0;

    while(strArr[pBegin] != '\0')
    {
        if(strArr[pBegin] == ' ') // 拉齐后pbegin和pend都指向空格
        {
            pBegin++;
            pEnd++;
        }
        else if(strArr[pEnd] == ' ' || strArr[pEnd] == '\0') // 单词结束标志，翻转
        {
            reverse(strArr, pBegin, --pEnd); // pend上面指向了空格，翻转要求是有效字符，所以要减一
            pBegin = ++pEnd; // 拉齐pbegin指向空格
        }
        else
            pEnd++; // pend向后遍历
    }

}


void LeftRotateString(char *str, int n)
{
    if (str == NULL)
        return;

    int index = 0;
    while (str[index] != '\0')
    {
        index++;
    }
    int len = index;

    if(n >= len)
        return;

    int startFirst = 0;
    int endFirst = n-1;
    int startSecond = n;
    int endSecond = len-1;

    reverse(str, startFirst, endFirst);
    reverse(str, startSecond, endSecond);
    reverse(str, startFirst, endSecond);
}


int main() {

    char s[] = "hello world";
    char s2[] = "abcdefg";
    ReverseSentence(s);
    cout<<s<<endl;
    LeftRotateString(s2,2);
    cout<<s2<<endl;

}
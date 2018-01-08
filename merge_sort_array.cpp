#include <iostream>
#include <vector>
using namespace std;

// 打印vector内容
void printArray(const vector<int> &data)
{
    for(int i = 0; i < data.size(); i++)
        cout<<data[i]<<" ";
    cout<<endl;
}

void mergeTwoSortedArray(vector<int> &v1, vector<int> &v2)
{

    int len1 = v1.size();
    int len2 = v2.size();
    int i = 0;
    while (v1[i] != -1) // 计算v1有效长度
        i++;
    if (i+len2 > len1) // v1空间不够
        return;
    if (i == 0 && len2 == 0) // 两个数组都为空
        return;

    // 设定指针
    int p1 = i-1;
    int p2 = len2-1;
    int p3 = i+len2;

    v1[p3] = -1;
    p3--;

    if (i == 0) // v1空，只复制v2
    {
        while(p3 >= 0)
        {
            v1[p3--] = v2[p2--];
        }
        return;
    }

    if (len2 == 0) // v2空，只复制v1
    {
        while(p3 >= 0)
        {
            v1[p3--] = v1[p1--];
        }
        return;
    }

    // 从尾至头合并有序数组
    while(p3 >= 0)
    {

        if(v1[p1] >= v2[p2] &&  p1 >= 0)
            v1[p3] = v1[p1--];
        else if (v1[p1] < v2[p2] &&  p2 >= 0)
            v1[p3] = v2[p2--];
        p3--;
    }


}

int main()
{
    vector<int> v1(10);
    v1[0] = 1;
    v1[1] = 2;
    v1[2] = 4;
    v1[3] = -1;
    int array2[] = {3,5,6,7};
    vector<int> v2(array2, array2+4);
    printArray(v1);
    printArray(v2);
    mergeTwoSortedArray(v1, v2);
    printArray(v1);
}


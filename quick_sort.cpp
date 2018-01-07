
#include <iostream>
#include <vector>
#include <stdlib.h> 
using namespace std;

// 随机范围函数 
int randomInRange(int low, int high)
{
	return (rand() % (high-low+1)) + low; 
}

// 交换函数 
void swap(vector<int> &data, int p1, int p2)
{
    int tmp = data[p1];
    data[p1] = data[p2];
    data[p2] = tmp;
}

// 打印vector内容 
void printArray(const vector<int> &data)
{
    for(int i = 0; i < data.size(); i++)
        cout<<data[i]<<" ";
    cout<<endl;
}

// 分割数组 
int partition(vector<int> &data, int length, int start, int end)
{
    if (length <= 0 || start < 0 || end >= length)
        return -1;

    int index = randomInRange(start, end);
    swap(data, index, end);
    printArray(data);

    int small = start-1; // 
    for(int i = start; i < end; i++)
    {
        if (data[i] < data[end])
        {
            small++;
            if (small != i)
                swap(data, small, i);
        }
    }

    small++; // 此时small代表了中间的索引数 
    swap(data, small, end);
    return small;
}

// 快速排序 
void randomQuickSort(vector<int> &data, int length, int start, int end)
{
    if (start == end)
        return;
    int index = partition(data, length, start, end);
    if (index > start)
        randomQuickSort(data, length, start, index-1); // 排序左半部 
    if (index < end)
        randomQuickSort(data, length, index+1, end); // 排序右半部 
}


int main() {
	
	int dataArr[] = {5,1,2,4,3};
	vector<int> data(dataArr , dataArr+5);  
    int len = data.size();
    
    randomQuickSort(data, len, 0, len-1);
    printArray(data);
}

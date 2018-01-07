
#include <iostream>
#include <vector>
#include <stdlib.h> 
using namespace std;

// �����Χ���� 
int randomInRange(int low, int high)
{
	return (rand() % (high-low+1)) + low; 
}

// �������� 
void swap(vector<int> &data, int p1, int p2)
{
    int tmp = data[p1];
    data[p1] = data[p2];
    data[p2] = tmp;
}

// ��ӡvector���� 
void printArray(const vector<int> &data)
{
    for(int i = 0; i < data.size(); i++)
        cout<<data[i]<<" ";
    cout<<endl;
}

// �ָ����� 
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

    small++; // ��ʱsmall�������м�������� 
    swap(data, small, end);
    return small;
}

// �������� 
void randomQuickSort(vector<int> &data, int length, int start, int end)
{
    if (start == end)
        return;
    int index = partition(data, length, start, end);
    if (index > start)
        randomQuickSort(data, length, start, index-1); // ������벿 
    if (index < end)
        randomQuickSort(data, length, index+1, end); // �����Ұ벿 
}


int main() {
	
	int dataArr[] = {5,1,2,4,3};
	vector<int> data(dataArr , dataArr+5);  
    int len = data.size();
    
    randomQuickSort(data, len, 0, len-1);
    printArray(data);
}

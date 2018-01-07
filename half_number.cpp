#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;


int randomSelect(int low, int high)
{
	return (rand()%(high-low+1))+low;
}

void swap(vector<int> &data, int p1, int p2)
{
	int tmp = data[p1];
	data[p1] = data[p2];
	data[p2] = tmp;
}


void printArray(const vector<int> &data)
{
    for(int i = 0; i < data.size(); i++)
        cout<<data[i]<<" ";
    cout<<endl;
}

int partition(vector<int> &data, int start, int end)
{
	if (data.size() == 0 || start < 0 || end >= data.size())
		return -1;

	int index = randomSelect(start, end);
	swap(data, index, end);

	int small = start-1;
	for(int i = start; i < end; i++)
	{
		if (data[i] < data[end])
		{
			small++;
			if (small != i)
				swap(data, small, i);
		}
	}

	small++;
	swap(data, small, end);

	return small;
}


bool checkAnsValid(const vector<int> &data, int ans)
{
	int count = 0;
	for(int i = 0; i < data.size();i++)
	{
		if (data[i] == ans)
			count++;
	}
	if(count*2 > data.size())
		return true;
	else
		return false;
}

int findHalfNumber(vector<int> &data)
{
	int len = data.size();
	int start = 0;
	int end = len-1;
	int mid = len/2;
	int index = partition(data, start, end);

	while(index != mid)
	{
		if (index < mid)
		{
			start = index+1;
			index = partition(data, start, end);
		}
		else
		{
			end = index-1;
			index = partition(data, start, end);
		}

	}
	int ans = data[mid];
	if (!checkAnsValid(data, ans))
		ans = -1;
	return ans;
}

int findHalfNumberv2(vector<int> &data)
{
	int value = 0;
	int count = 0;
	for(int i = 0; i < data.size();i++)
	{
		if (count == 0)
		{
			value = data[i];
			count++;
		}
		else
		{
			if (data[i] == value)
				count++;
			else
				count--;
		}
	}
	if (!checkAnsValid(data, value))
        return 0;
	return value;
}



int main()
{
	int dataArr[] = {4,2,4,1,4,2};
	vector<int> data(dataArr , dataArr+6);
    int len = data.size();
    printArray(data);

    //int ans = findHalfNumber(data);
    int ans = findHalfNumberv2(data);
    cout<<ans<<endl;

}

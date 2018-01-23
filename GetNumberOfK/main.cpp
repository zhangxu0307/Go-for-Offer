#include <iostream>
#include <vector>
using namespace std;

int getFirstK(vector<int> data ,int k)
{
    int start = 0;
    int end = data.size()-1;
    int mid = (start+end)/2;
    while(start <= end)
    {
        if (data[mid] == k && data[mid-1] != k) // 第一个k直接返回
            return mid;
        if (data[mid] == k && data[mid-1] == k) // 不是第一个k，右半部查
            end = mid-1;
        if(data[mid] < k)
            start = mid+1;
        if(data[mid] > k)
            end = mid-1;

        mid = (start+end)/2;
    }

    return -1;

}


int getLastK(vector<int> data ,int k)
{
    int start = 0;
    int end = data.size()-1;
    int mid = (start+end)/2;
    while(start <= end)
    {
        if (data[mid] == k && data[mid+1] != k) // 最后一个k，返回
            return mid;
        if (data[mid] == k && data[mid+1] == k) // 不是最后一个k，右半部查
            start = mid+1;
        if(data[mid] < k)
            start = mid+1;
        if(data[mid] > k)
            end = mid-1;

        mid = (start+end)/2;
    }

    return -1;
}

int GetNumberOfK(vector<int> data ,int k)
{
    int first = getFirstK(data, k);
    int last = getLastK(data, k);

    cout<<first<<endl;
    cout<<last<<endl;

    if(first >= 0 && last >= 0)
        return last-first+1;
    else
        return 0;

}

int main() {
    int arr[] = {1,2,2,4,5};
    vector<int> v1(arr,arr+5);
    int ans = GetNumberOfK(v1,3);
    cout<<ans<<endl;
}
#include <iostream>
#include <vector>
using namespace std;


int merge(vector<int> &data, int start, int mid, int end)
{
    vector<int> tmp;
    int i = start;
    int j = mid+1;
    int cnt = 0;
    while(i <= mid && j <= end)
    {
        if(data[i] <= data[j])
        {
            tmp.push_back(data[i]);
            i++;
        }
        else {
            cnt += j-mid;
            tmp.push_back(data[j]);
            j++;
        }
    }

    while(i <= mid)
    {
        tmp.push_back(data[i]);
        i++;
    }

    while (j <= end)
    {
        tmp.push_back(data[j]);
        j++;
    }

    for(i=0; i<tmp.size(); i++)
        data[start+i] = tmp[i];

    return cnt;

}

int mergeSort(vector<int> &data, int start, int end)
{
    int cnt = 0;
    if(start < end)
    {
        int mid = (start + end)/2;

        cnt += mergeSort(data, start, mid); //左半部分 逆序对数量

        cnt += mergeSort(data, mid+1, end); //右半部分

        cnt += merge(data, start, mid, end); //合并两部分，并计算数量

    }

    return cnt;

}


int InversePairs(vector<int> &data)
{
    return mergeSort(data, 0, data.size()-1);
}


int main() {

    int arr[] = {7,5,6,4};
    vector<int> v(arr, arr+4);
    int ans = InversePairs(v);
    cout<<ans<<endl;

    for(int i = 0; i < v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
}
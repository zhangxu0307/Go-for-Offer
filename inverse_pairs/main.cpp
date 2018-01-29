#include <iostream>
#include <vector>
using namespace std;


int merge(vector<int> &data, int start, int mid, int end)
{
    vector<int> tmp;
    int i = start;
    int j = mid+1; // 右半部子数组开头是mid+1，因为下面右半部子数组不包含mid
    int cnt = 0;

    while(i <= mid && j <= end)
    {
        if(data[i] <= data[j])
        {
            tmp.push_back(data[i]);
            i++;
        }
        else {
            cnt += j-mid; // 逆序对，从j开始一直到第二个子数组的头部，都够成了逆序对
            tmp.push_back(data[j]);
            j++;
        }
    }

    // 剩余的子数组merge到tmp
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

    for(i=0; i<tmp.size(); i++) // 还需要将排序好的数组复制回原数组
        data[start+i] = tmp[i];

    return cnt;

}

int mergeSort(vector<int> &data, int start, int end)
{
    int cnt = 0;
    if(start < end) // 控制条件是start和end
    {
        int mid = (start + end)/2;

        cnt += mergeSort(data, start, mid); //左半部分 包含mid

        cnt += mergeSort(data, mid+1, end); //右半部分 不包含mid

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
#include<iostream>
#include<vector>
using namespace std;

int search(vector<int> arr, int index1, int index2)
{
    int res = arr[index1];
    for(int i = index1+1; i <= index2; i++)
    {
        if(arr[i] < res)
            res = arr[i];
    }
    return res;
}

int minNumberInRotateArray(vector<int> rotateArray)
{
    int index1 = 0;
    int index2 = rotateArray.size()-1;

    if(rotateArray[index1] < rotateArray[index2]) //有序数组是一个旋转数组特例，单独处理
        return rotateArray[index1];

    while(index2-index1 > 1)
    {
        int midIndex = (index1+index2)/2;
        // 首尾与中间值相同，不可能比较出属于前半部还是后半部，只能顺序查找
        if(rotateArray[index1] == rotateArray[index2] &&
                rotateArray[midIndex] == rotateArray[index1])
            return search(rotateArray, index1, index2);
        if(rotateArray[midIndex] >= rotateArray[index1])
            index1 = midIndex;
        else if(rotateArray[midIndex] <= rotateArray[index2])
            index2 = midIndex;
    }

    return rotateArray[index2];
}

int main()
{
    int arr[] = {1,0,1,1,1};
    //int arr[] = {3,4,5,1,2};
    vector<int> rotateArr(arr, arr+5);
    int ans = minNumberInRotateArray(rotateArr);
    cout<<ans<<endl;
}

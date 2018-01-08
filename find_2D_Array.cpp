
#include<iostream>
#include<vector>
using namespace std;

void printArray2D(const vector< vector<int> > array)
{
    int row = array.size();
    int col = array[0].size();
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
            cout<<array[i][j]<<" ";
        cout<< endl;
    }
}

bool Find(int target, vector< vector<int> > array) {

    if (array.size() == 0)
        return false;
    int row = array.size();
    int col = array[0].size();
    int x = 0;
    int y = col-1;
    while (x < row && y >= 0)
    {
        //cout<<x<<" "<<y<<endl;
        if (array[x][y] > target)
            y--;
        else if (array[x][y] < target)
            x++;
        else
            return true;
    }
    return false;
}

int main()
{
    int dataArr1[] = {1,2,8,9};
	vector<int> data1(dataArr1 , dataArr1+4);
	int dataArr2[] = {2,4,9,12};
	vector<int> data2(dataArr2 , dataArr2+4);
	int dataArr3[] = {4,7,10,13};
	vector<int> data3(dataArr3 , dataArr3+4);
	int dataArr4[] = {6,8,11,15};
	vector<int> data4(dataArr4 , dataArr4+4);
    vector< vector<int> > array;
    array.push_back(data1);
    array.push_back(data2);
    array.push_back(data3);
    array.push_back(data4);
    printArray2D(array);

    int target = 7;
    bool ans = Find(target, array);
    cout<<ans<<endl;


}

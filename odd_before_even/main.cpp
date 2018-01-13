#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> array)
{
    for(int i = 0; i < array.size();i++)
        cout<<array[i]<<" ";
    cout<<endl;
}

void reOrderArray(vector<int> &array)
{
    int len = array.size();
    int p1 = 0;
    int p2 = len-1;

    while (p1 < p2)
    {
        while(p1 < p2 && (array[p1]%2 == 1))
            p1++;

        while(p1 < p2 && (array[p2]%2 == 0))
            p2--;

        if(p1 < p2)
        {
            int tmp = array[p1];
            array[p1] = array[p2];
            array[p2] = tmp;
        }
    }
}

void reOrderArray_v2(vector<int> &array)
{
    int len = array.size();
    int p1 = -1;
    for(int i = 0;i < len;i++)
    {
        if(array[i]%2 == 1)
        {
            if(p1 != i)
            {
                p1++;
                int tmp = array[p1];
                array[p1] = array[i];
                array[i] = tmp;
            }

        }
    }
}


int main() {

    int num[] = {2, 5, 11, 7, 0, 4};
    vector<int> array(num, num+6);
    printVector(array);
    //reOrderArray(array);
    reOrderArray_v2(array);
    printVector(array);


}
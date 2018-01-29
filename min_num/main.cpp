#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;

bool cmp(string &s1, string &s2)
{
    string mn = s1+s2;
    string nm = s2+s1;
    return mn < nm;
}

string PrintMinNumber(vector<int> numbers)
{
    int num = numbers.size();
    string *array = new string[num];
    for(int i = 0; i < num; i++)
    {
        stringstream stream;
        stream<<numbers[i];
        stream>>array[i];
    }

    sort(array,  array+num, cmp);
    string ans;
    for(int i = 0; i < num; i++)
        ans += array[i];

    return ans;
}

int main() {

    int number[] = {3,32,321};
    vector<int> v(number, number+3);
    string ans = PrintMinNumber(v);
    cout<<ans<<endl;
}
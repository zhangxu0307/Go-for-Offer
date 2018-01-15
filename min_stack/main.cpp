#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:

    stack<int> mainSatck;
    stack<int> minSatck;
    int minNum = 99999999;
    void push(int value) {

        mainSatck.push(value);
        if(value < minNum)
            minNum = value;
        minSatck.push(minNum);
    }
    void pop() {
        mainSatck.pop();
        minSatck.pop();
    }
    int top() {
        return mainSatck.top();
    }
    int min() {
        return minSatck.top();

    }
};

int main() {

    Solution mySatck = Solution();
    mySatck.push(6);
    mySatck.push(3);
    mySatck.push(4);
    mySatck.push(2);
    mySatck.pop();
    mySatck.pop();
    int min = mySatck.min();
    cout<<min<<endl;
}
#include<iostream>
#include<stack>
#include<queue>
using namespace std;


class Solution
{
    public:
        void push(int node) {
            if (!queue1.empty())
                queue1.push(node);
            if (!queue2.empty())
                queue2.push(node);
            if (queue1.empty() && queue2.empty())
                queue1.push(node);
        }

        int pop() {

            if (!queue1.empty())
            {
                while (queue1.size() > 1)
                {
                    int data = queue1.front();
                    queue1.pop();
                    queue2.push(data);
                }
                int res = queue1.front();
                queue1.pop();
                return res;
            }
            else if (!queue2.empty())
            {
                while (queue2.size() > 1)
                {
                    int data = queue2.front();
                    queue2.pop();
                    queue1.push(data);
                }
                int res = queue2.front();
                queue2.pop();
                return res;
            }
        }

    private:
        queue<int> queue1;
        queue<int> queue2;
};

int main()
{
    Solution stack1;
    stack1.push(1);
    stack1.push(2);
    stack1.push(3);
    stack1.push(4);

    int data = stack1.pop();
    cout<<data<<endl;
    data = stack1.pop();
    cout<<data<<endl;
    data = stack1.pop();
    cout<<data<<endl;
    data = stack1.pop();
    cout<<data<<endl;

}

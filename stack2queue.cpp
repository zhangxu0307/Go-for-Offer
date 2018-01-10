#include<iostream>
#include<stack>
using namespace std;

class Solution
{
    public:
        void push(int node) {
            stack1.push(node);
        }

        int pop() {
            if (stack2.size()<=0)
            {
                while(!stack1.empty())
                {
                    int data = stack1.top();
                    stack1.pop();
                    stack2.push(data);
                }
            }
            int res = stack2.top();
            stack2.pop();
            return res;
        }

    private:
        stack<int> stack1;
        stack<int> stack2;
};


int main()
{
    Solution queue1;
    queue1.push(1);
    queue1.push(2);
    queue1.push(3);
    queue1.push(4);

    int data = queue1.pop();
    cout<<data<<endl;
    data = queue1.pop();
    cout<<data<<endl;
    data = queue1.pop();
    cout<<data<<endl;
    data = queue1.pop();
    cout<<data<<endl;
}


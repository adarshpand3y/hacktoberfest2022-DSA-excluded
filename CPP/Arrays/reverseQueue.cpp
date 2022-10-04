#include <bits/sdc++.h>

using namespace std;

void get(queue<int> &q)
{
    stack<int> st;
    while (!q.empty())
    {
        st.push(q.front());
        q.pop();
    }
    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
}
int main()
{
    queue<int> q;
    q.push(12);
    q.push(62);
    q.push(42);
    q.push(32);
    get(q);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}
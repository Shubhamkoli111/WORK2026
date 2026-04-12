#include <iostream>
#include <queue>
using namespace std;
int main()
{

    // priority_queue<int> q;
    priority_queue<int, vector<int>, greater<int>> q; // greater<int> is a functor(function object) like comparator

    q.push(4);
    q.push(3);
    q.push(8);
    q.push(5);

    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }

    return 0;
}
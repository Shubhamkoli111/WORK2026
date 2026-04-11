#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l;     // vector is implemented as dynamic array and list as doubly LL

    //size,begin,clear,erase,end,r_begin,r_end,insert,front,back are same as vector
    // random access not possible

    l.push_back(1);
    l.push_back(2);

    l.push_front(3);
    l.push_front(4);

    l.emplace_back(5);
    l.emplace_front(6);

    // l.pop_back();
    // l.pop_front();

    for (int val : l)
    {
        cout << val << endl;
    }
}
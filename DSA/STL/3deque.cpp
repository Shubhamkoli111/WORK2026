
// deque : duobly ended queue (different from dequeue)
// dynamic array implementation
//random access possible

// deque<int> d= {1,2,3};

// all function works same as list

// push_back() , push_front(), emplace_back(), emplace_front(), pop_back(), pop_front() same as list

#include <iostream>
#include <deque>

using namespace std;
int main()
{
    deque<int> d = {1, 2, 3, 4};

    // for (int val : d)
    // {
    //     cout << val << endl;
    // }

    cout << d[2] << endl;
}

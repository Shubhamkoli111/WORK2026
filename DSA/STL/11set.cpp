#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;
int main()
{

    // set<int> s; // unique and ordered elements

    // multiset<int> s; //not unique but ordered

    unordered_set<int> s; //unique but unordered //O(1)
    
    s.insert(1); // O(logn)
    s.insert(2);
    s.insert(3);
    s.insert(5);
    s.insert(6);

    s.insert(1);
    s.insert(2);
    s.insert(3);

    cout << "Size of set: " << s.size() << endl;

    for (auto x : s)
        cout << x << " ";

    // cout << "lower bound: " << *(s.lower_bound(3)) << endl;  //should not be less than key
    // cout << "lower bound: " << *(s.lower_bound(4)) << endl;
    // cout << "lower bound: " << *(s.lower_bound(7)) << endl; //garbage value

    // cout << "upper bound: " << *(s.upper_bound(4)) << endl; // greater than key
    // cout << "upper bound: " << *(s.upper_bound(3)) << endl;
    // cout << "upper bound: " << *(s.upper_bound(7)) << endl; // garbage value

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<int> vec;
    // vector is implemented as dynamic array and list as doubly LL

    vector<int> vec = {1, 2, 3, 4};
    // vector<int> vec(3, 10);

    // copy vector
    // vector<int> vec2(vec);

    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    // vec.push_back(4);
    // vec.push_back(5);

    // vec.emplace_back(6);

    // vec.pop_back();
    // vec.pop_back();

    // cout<<vec.size()<<endl;
    // cout<<vec.capacity()<<endl;

    // print vector elements
    // for (int val : vec)
    //     cout << val << " ";
    // cout << endl;

    // cout << "val at index 2 is " << vec[2] << " or " << vec.at(2) << endl;

    // cout << vec.front() << " is front & back is " << vec.back() << endl;

    // erase O(n)
    // vec.erase(vec.begin()); //particular element
    // vec.erase(vec.begin()+2);

    // vec.erase(vec.begin() + 1, vec.begin() + 3); //Range of element and last not included

    // insert --> (position,value)
    // vec.insert(vec.begin() + 2, 100);

    // clear --> clear all elements
    //  vec.clear(); //size becomes zero, but capacity remains as it is

    // empty --> check vec is empty or not
    //  vec.empty();

    // vector iterator
    //  cout << "vec.begin(): " << *vec.begin() << endl;
    //  cout << "vec.end(): " << *(vec.end()-1) << endl;
    // cout << "vec.rbegin(): " << *(vec.rbegin()) << endl;
    // cout << "vec.rend(): " << *(vec.rend() - 1) << endl;

    // vector<int>::iterator it;
    // for (it = vec.begin(); it != vec.end(); it++)
    //     cout << *it << endl;

    // vector<int>::reverse_iterator it;
    // for (it = vec.rbegin(); it != vec.rend(); it++)
    //     cout << *it << endl;

    // instead of using vector<int>::reverse_iterator it; we can use "auto"
    // for (auto it = vec.rbegin(); it != vec.rend(); it++)
    //      cout << *it << endl;
}

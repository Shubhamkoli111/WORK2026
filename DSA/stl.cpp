#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    vec.emplace_back(6);

    vec.pop_back();
    vec.pop_back();

    // cout<<vec.size()<<endl;
    // cout<<vec.capacity()<<endl;

    // print vector elements
    //  for (int val : vec)
    //      cout << val << " ";
    //  cout << endl;
}
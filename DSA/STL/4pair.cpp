#include <iostream>
#include <vector>

using namespace std;
int main()
{
    // pair<int, int> p = {1, 4};
    // pair<string, int> p = {"sk", 10};
    // pair<int, pair<string, int>> p = {5, {"jjj", 23}};

    // cout << p.first << endl;
    // // cout << p.second << endl;
    // cout << p.second.first << endl;
    // cout << p.second.second << endl;

    vector<pair<int, int>> vec = {{1, 2}, {2, 3}, {3, 4}};

    vec.push_back({9, 0});  // insert
    vec.emplace_back(5, 6); // in-place objects create

    // for (pair<int, int> p : vec)
    for (auto p : vec)
        cout << p.first << " " << p.second << endl;
    return 0;
}
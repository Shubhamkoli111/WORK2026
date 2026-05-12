#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comparator(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;

    if (p1.second > p2.second)
        return false;

    if (p1.first < p2.first)
        return true;
    else
        return false;
}

int main()
{

    // int arr[5] = {3, 56, 12, 67, 33};
    vector<int> vec = {3, 56, 12, 67, 33};
    // vector<pair<int, int>> vec = {{82, 11}, {12, 98}, {62, 11}, {63, 56}, {23, 41}, {27, 5}};

    // sort(arr, arr + 5);

    // sort(vec.begin(), vec.end()); // ascending
    // sort(vec.begin(), vec.end(), greater<int>()); // descending

    // sort(vec.begin(), vec.end(), comparator); //custom comparator

    // for (int x : arr)
    //     cout << x << " ";

    // for (int x : vec)
    //     cout << x << " ";

    // for (auto p : vec)
    //     cout << p.first << " " << p.second << endl;
    // return 0;

    // ----------------------------REVERSE--------------------------------

    // reverse(vec.begin(), vec.end());
    // reverse(vec.begin() + 1, vec.begin() + 4);

    // for (int x : vec)
    //     cout << x << " ";

    //-------------------------NEXT PERMUTATION---------------------------

    // string s = "abc";
    // // next_permutation(s.begin(), s.end());
    // prev_permutation(s.begin(), s.end());

    //  cout << s << endl;

    // cout << min(4, 6) << " " << max(9, 4);

    // --------------------------------------------------------------------------

    // cout << *(min_element(vec.begin(), vec.end())) << endl;
    // cout << *(max_element(vec.begin(), vec.end())) << endl;

    // binary_search(vec.begin(),vec.end(),target);

    int n = 31;
    long int n2 = 31;
    long long int n3 = 31;
    cout << __builtin_popcount(n) << endl;    // int
    cout << __builtin_popcountl(n2) << endl;  // long int
    cout << __builtin_popcountll(n3) << endl; // long long int
}
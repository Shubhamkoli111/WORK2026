#include <iostream>
#include <map>
using namespace std;
int main()
{

    multimap<string, int> m; // cant use square bracket for inserting elements

    // can assing multiple key values
    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100);

    // m.erase("tv"); //delete all similar instances
    m.erase(m.find("tv"));

    for (auto it : m)
        cout << it.first << " " << it.second << endl;

    return 0;
}
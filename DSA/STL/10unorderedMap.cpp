#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{

    unordered_map<string, int> m; // tc is O(1) for insert,delete and O(logn) for map(ordered)

    m["Tv"] = 100;
    m["Laptop"] = 200;
    m["Speaker"] = 50;
    m["Mobile"] = 150;
    m["Torch"] = 120;

    m.emplace("Camera", 90);
    m.insert({"Cell", 300});

    // m.erase("Tv");

    // if (m.find("Mobile") != m.end())
    //     cout << "Found\n";
    // else
    //     cout << "Not Found\n";

    for (auto it : m)
        cout << it.first << " " << it.second << endl;

    // cout << "count= " << m.count("Laptop") << endl;
    // cout << "value= " << m["Laptop"] << endl;

    return 0;
}
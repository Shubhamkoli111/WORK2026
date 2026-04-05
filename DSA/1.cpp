#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cout << "Enter Divident: " << endl;
    cin>>a;

    int b;
    cout << "Enter Divisor: " << endl;
    cin>>b;

    int c;
    c = a / b;
    cout << "Qoutient of the division is: "<< c << endl;

    int d;
    d = a % b;
    cout << "Remainder of the division is: "<< d << endl;

    return 0;
}
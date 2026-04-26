#include <iostream>
#include <vector>
#include<string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string a;

    cin >> a;

    if (a == "M")
    {
        cout << "MatKor";
    }
    else if (a == "W")
    {
        cout << "WiCys";
    }
    else if (a == "C")
    {
        cout << "CyKor";
    }
    else if (a == "A")
    {
        cout << "AlKor";
    }
    else if (a == "$")
    {
        cout << "$clear";
    }
    return 0;
}

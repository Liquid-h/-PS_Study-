#include <iostream>
#include <vector>
#include<string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int h, m;
    int num;
    vector<int> s(4);

    cin >> h >> m;
    cin >> num;

    m += num;

    h += m / 60;
    m %= 60;
    h %= 24;

    cout << h << " " << m;

    return 0;
}

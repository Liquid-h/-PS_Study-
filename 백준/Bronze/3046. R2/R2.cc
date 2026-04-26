#include <iostream>
#include <vector>
#include<queue>
#include<algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x, y, s;

    cin >> x >> s;

    y = 2 * s - x;

    cout << y;

    return 0;
}

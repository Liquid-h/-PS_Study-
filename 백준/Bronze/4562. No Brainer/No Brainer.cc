#include<iostream>
#include<queue>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, x, y;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> x >> y;
        if (x >= y)
        {
            cout << "MMM BRAINS\n";
        }
        else
        {
            cout << "NO BRAINS\n";
        }
    }
    return 0;
}
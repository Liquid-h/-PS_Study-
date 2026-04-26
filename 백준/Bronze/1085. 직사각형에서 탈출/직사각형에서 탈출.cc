#include<iostream>
#include<vector>
using namespace std;

int main(void)
{
    int x, y, w, h;

    cin >> x >> y >> w >> h;

    int mindis = x;

    if (y < mindis)
    {
        mindis = y;
    }
    if (w - x < mindis)
    {
        mindis = w - x;
    }
    if (h - y < mindis)
    {
        mindis = h - y;
    }

    cout << mindis << endl;

    return 0;
}


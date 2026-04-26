#include<iostream>
#include<iomanip>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cout << fixed << setprecision(1);

    float w, h;

    cin >> w >> h;

    cout << w * h / 2;

    return 0;
}
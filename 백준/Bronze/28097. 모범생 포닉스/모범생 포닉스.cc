#include<iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t, u = 0;
    int day = 0, hour = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> t;
        u += t;
        if (i > 0)
        {
            u += 8;
        }
    }
    day = u / 24;
    hour = u % 24;
  
    cout << day << " " << hour << "\n";

    return 0;
}
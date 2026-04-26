#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

/*꿍실냐옹~~!!*/

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y;

    while (1)
    {
        cin >> x >> y;

        if (x == 0 && y == 0)
        {
            break;
        }

        cout << x + y << "\n";
    }
    return 0;
}
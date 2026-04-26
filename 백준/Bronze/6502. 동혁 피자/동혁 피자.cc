#include<iostream>
#include<queue>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int r, w, l;
    int i = 1;

    while (1 != 0)
    {
        cin >> r >> w >> l;

        if (r == 0)
        {
            break;
        }
        cout << "Pizza " << i++ << " ";
        if ((w * w + l * l) <= 4 * r * r)
        {
            cout << "fits on the table.\n";
        }
        else if((w * w + l * l) > 4 * r * r)
        {
            cout << "does not fit on the table.\n";
        }
    }
    return 0;
}
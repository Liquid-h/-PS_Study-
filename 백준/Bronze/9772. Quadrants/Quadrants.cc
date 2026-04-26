#include <iostream>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    double x, y;

    while (1)
    {

        cin >> x >> y;

        if (x == 0 || y == 0)
        {
            if (x == 0 && y == 0)
            {
                cout << "AXIS" << endl;
                break;
            }
                cout << "AXIS" << endl;
        }
        else
        {
            if (x > 0)
            {
                if (y > 0)
                {
                    cout << "Q1" << endl;
                }
                else
                {
                    cout << "Q4" << endl;
                }
            }
            else
            {
                if (y > 0)
                {
                    cout << "Q2" << endl;
                }
                else
                {
                    cout << "Q3" << endl;
                }
            }
        }
    }

    return 0;
}
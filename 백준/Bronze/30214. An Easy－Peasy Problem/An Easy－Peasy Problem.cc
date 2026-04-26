#include <iostream>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    float a, b;

	cin >> a >> b;

    if (a >= b / 2)
    {
        cout << "E" << endl;
    }
    else if (a < b / 2)
    {
        cout << "H" << endl;
    }

    return 0;
}
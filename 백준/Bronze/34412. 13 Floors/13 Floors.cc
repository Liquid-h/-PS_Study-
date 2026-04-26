#include <iostream>
#include <vector>
#include<string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;
    if (n > 12)
    {
        n++;
    }

    cout << n;

    return 0;
}

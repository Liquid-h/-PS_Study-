#include <iostream>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    long long  n1, n2, n3;

    cin >> n1 >> n2 >> n3;

    long long result = (n1 + 1) * (n2 + 1) / (n3 + 1) - 1;

    cout << result << endl;

    return 0;
}
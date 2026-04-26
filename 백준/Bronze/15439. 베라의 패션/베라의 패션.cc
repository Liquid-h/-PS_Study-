#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

/*꿍실냐옹~~!!*/

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, result;

    cin >> n;

    result = n * (n - 1);

    cout << result << "\n";

    return 0;
}
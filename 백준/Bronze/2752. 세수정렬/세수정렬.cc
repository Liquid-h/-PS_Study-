#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

/*꿍실냐옹~~!!*/

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> s(3);

    for (int i = 0; i < 3; i++)
    {
        cin >> s[i];
    }

    sort(s.begin(), s.end());

    for (int i = 0; i < 3; i++)
    {
        cout << s[i] << " ";
    }
    return 0;
}
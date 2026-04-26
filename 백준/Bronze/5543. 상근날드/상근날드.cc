#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

/*꿍실냐옹~~!!*/

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> burger(3);
    vector<int> soda(2);

    for (int i = 0; i < 3; i++)
    {
        cin >> burger[i];
    }
    for (int i = 0; i < 2; i++)
    {
        cin >> soda[i];
    }

    sort(burger.begin(), burger.end());
    sort(soda.begin(), soda.end());

    cout << burger[0] + soda[0] - 50;

    return 0;
}
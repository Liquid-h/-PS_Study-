#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
using namespace std;

/*꿍실냐옹~~!!*/

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, result;
    queue<int> q;

    cin >> a >> b;

    q.push(a);
    q.push(b);

    vector<int> s;

    while (!q.empty())
    {
        s.push_back(q.front());
        q.pop();
    }

    sort(s.begin(), s.end());


    result = s.back() - s.front();

    cout << a - 543 << "\n";

    return 0;//히히히히히히히히히히히히히히히히힣
}
#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;

    cin >> n;

    queue<int> q;

    for (int i = 1; i <= n; i++)
    {
        q.push(i);
    }
    while (q.size() > 1)
    {
        q.pop();
        x = q.front();
        q.pop();
        q.push(x);
    }

    cout << q.front() << "\n";

    return 0;
}
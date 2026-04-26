#include<iostream>
#include<queue>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, v, e;

    queue<int> q;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> v >> e;
        q.push(2 - v + e);
    }
    for (int i = 0; i < t; i++)
    {
        cout << q.front() << "\n";
        q.pop();
    }
    return 0;
}
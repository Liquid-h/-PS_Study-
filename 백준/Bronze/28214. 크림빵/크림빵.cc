#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, k, p, result = 0;

    queue<int> q;

    if (!(cin >> n >> k >> p)) return 0;

    for (int i = 0; i < n; i++) 
    {
        int stack = 0;

        for (int ii = 0; ii < k; ii++)
        {
            int cream;
            cin >> cream;
            q.push(cream);
        }

        while (!q.empty())
        {
            if (q.front() == 0)
            {
                stack++;
            }
            q.pop();
        }

        if (stack < p)
        {
            result++;
        }
    }

    cout << result << "\n";

    return 0;
}
#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string a;
    int t, x;
    queue<int> q;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> a;
        if (a == "push")
        {
            cin >> x;
            q.push(x);
        }
        else if (a == "pop")
        {
            if (q.empty())
            {
                cout << "-1"<<"\n";
            }
            else
            {
                cout << q.front()<<"\n";
                q.pop();
            }
        }
        else if (a == "size")
        {
            cout << q.size() << "\n";
        }
        else if (a == "empty")
        {
            if (q.empty())
            {
                cout << "1" << "\n";
            }
            else
            {
                cout << "0" << "\n";
            }
        }
        else if (a == "front")
        {
            if (q.empty())
            {
                cout << "-1" << "\n";
            }
            else
            {
                cout << q.front() << "\n";
            }
        }
        else if (a == "back")
        {
            if (q.empty())
            {
                cout << "-1" << "\n";
            }
            else
            {
                cout << q.back() << "\n";
            }
        }
    }


    return 0;
}
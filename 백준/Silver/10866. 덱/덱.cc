#include <iostream>
#include<deque>
#include<string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string a;
    int n, x;
    deque<int> s;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;

        if (a == "push_front")
        {
            cin >> x;
            s.push_front(x);
        }
        else if (a == "push_back")
        {
            cin >> x;
            s.push_back(x);
        }
        else if (a == "pop_front")
        {
            if (!s.empty())
            {
                cout << s.front() << "\n";
                s.pop_front();
            }
            else
            {
                cout << "-1" << "\n";
            }
        }
        else if (a == "pop_back")
        {
            if (!s.empty())
            {
                cout << s.back() << "\n";
                s.pop_back();
            }
            else
            {
                cout << "-1" << "\n";
            }
        }
        else if (a == "size")
        {
            cout << s.size() << "\n";
        }
        else if (a == "empty")
        {
            if (!s.empty())
            {
                cout << "0" << "\n";
            }
            else
            {
                cout << "1" << "\n";
            }
        }
        else if (a == "front")
        {
            if (!s.empty())
            {
                cout << s.front() << "\n";
            }
            else
            {
                cout << "-1" << "\n";
            }
        }
        else if (a == "back")
        {
            if (!s.empty())
            {
                cout << s.back() << "\n";
            }
            else
            {
                cout << "-1" << "\n";
            }
        }
    }


    return 0;
}

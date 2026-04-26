#include <iostream>
#include <vector>
#include<string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
        
    string a;
    int count = 0;

    getline(cin, a);

    vector<char> s(a.begin(),a.end());

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ') 
        {
            if (i == 0 || s[i - 1] == ' ') 
            {
                count++; 
            }
        }
    }
    cout << count;

    return 0;
}

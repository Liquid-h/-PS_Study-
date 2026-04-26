#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    string str,result;
    int num, max_value = 0;

    for (int i = 0; i < 7; i++)
    {
        cin >> str >> num;
        if (num > max_value)
        {
            max_value = num;
            result = str;
		}
    }

    cout << result << "\n";

    return 0;
}
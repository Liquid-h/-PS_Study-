#include<iostream>
#include<vector>
using namespace std;

int main(void)
{
    int n;
    long long int k = 1;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        k *= i;
    }
    cout << k << endl;

    return 0;
}

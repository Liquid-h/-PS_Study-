#include<iostream>
using namespace std;
/* 꿍실냐옹*/
int main(void)
{
    int lee, jung, wu;
    int mx = 0;

    cin >> lee >> jung >> wu;

    if (lee == jung && jung == wu)
    {
        cout << 10000 + lee * 1000 << endl;
    }
    else if (lee == jung)
    {
        cout << 1000 + lee * 100 << endl;
    }
    else if (lee == wu)
    {
        cout << 1000 + lee * 100 << endl;
    }
    else if (jung == wu)
    {
        cout << 1000 + wu * 100 << endl;
    }
    else if (lee != jung && jung != wu && lee != wu)
    {
        if (lee > jung && lee > wu)
        {
            mx = lee;
        }
        if (jung > lee && jung > wu)
        {
            mx = jung;
        }
        if (wu > lee && wu > jung)
        {
            mx = wu;
        }
        cout << mx * 100 << endl;
    }
    return 0;
}
